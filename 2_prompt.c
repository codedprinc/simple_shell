#include "header.h"
/**
 * prompt - prompt for the hsh shell.
 * @void: .
 */
void prompt()
{
	char *getdata = NULL;
	char *getdata_2 = NULL;
	char dupdata[BUFSIZE];
	size_t len;
	ssize_t n_read;
	int wait2;
	pid_t child;

	while(1)
	{
		write(1, "($) ", 4);
		n_read = getline(&getdata, &len, stdin);

		if (n_read == -1)
		{
			perror("");
			free(getdata);
			exit(EXIT_FAILURE);
		}
		getdata_2 = strtok(getdata, "\n");
		getdata_2 = strcat(getdata_2, "\0");
		strcpy(dupdata, getdata_2);
		if (dupdata[0] == '/' || dupdata [0] == '.')
		{
			printf("Ok\n");
			wait2 = file_checker(dupdata);
			if (wait2 == 0)
			{
				printf("\nfound\n");
				child = fork();
				if (child == 0)
				{
					 builtin_cmd(dupdata);
					/*int new
					if (new == 0)
					{
						printf("ok\n");
					}
					else
					{
						printf("\n--\n");
					}*/
				}
				else
				{
					int status;
					wait(&status);
					usleep(1000);
				}
			}
			else
			{
				printf("\n error\n");
			}
		}
		else
		{
			write(1, getdata, strlen(getdata));
			write(1, "\n", 1);
		}
	}
	free(getdata);
}
