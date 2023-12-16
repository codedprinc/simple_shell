#include "header.h"
/**
 * main - entry point to the program.
 * @void: no arg.
 * Return: 0 if successful.
 */
int main(void)
{
	char buf[BUFSIZE];
	ssize_t r_read;
	int i = 0;

	if (isatty(STDIN_FILENO) != 0)
	{
		interactive();
	}
	else
	{
		while((r_read = read(0, buf, BUFSIZE)) > 0)
		{
			buf[r_read] ='\0';
			char *token = strtok(buf, " \t\n");

			while (token != NULL)
			{
				printf("Token[%d]: %s\n", i, token);
				// Access each token here
				non_Interactive(token, i);
				token = strtok(NULL, " \t\n");
				i++;
			}
			printf("\ndone\n");
		}
		if (r_read == -1)
		{
			perror("PIPE ERROR:");
			exit(EXIT_FAILURE);
		}
	}
	return (0);
}
