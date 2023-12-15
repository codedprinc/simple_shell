#include "header.h"
/**
 * prompt_nI - prompt for the hsh shell in nonInteractive mode.
 * @incmd: takes cmd from the pipe cmd
 */
void prompt_nI(char *getdata)
{
	char *getdata_2 = NULL;
	char dupdata[BUFSIZE];
	size_t len;
	ssize_t n_read;

//	strcpy(dupdata, getdata);
//	printf("%s\n", dupdata);
	//int i = 0;
/*	while(0)
	{*/
       	        getdata_2 = strtok(getdata, "\n");
		getdata_2 = strcat(getdata_2, "\0");
		strcpy(dupdata, getdata_2);
		if (dupdata[0] == '/' || dupdata [0] == '.')
		{
			printf("Ok\n");
			int wait2 = file_checker(dupdata);
			if (wait2 == 0)
			{
				printf("\nfound\n");
				pid_t child = fork();
				if (child == 0)
				{
					int new = builtin_cmd(dupdata);
					if (new == 0)
					{
						printf("ok\n");
					}
					else
					{
						printf("\n--\n");
					}
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
		/*}*/
		//free(getdata);
}
