#include "hshell.h"
/**
 * main - entry point to program.
 * @void: no.
 * Return: 0 if ok.
 */
int main(int ac, char **av)
{
	(void) ac;
	(void) av;
	mj_var vr[] = { VAR_VAL };

	while(1)
	{
		write(1, "($) ", 4);
		nread = getline(&vr->line, &&vr->len, stdin);
		if (nread == -1)
		{
			perror(" ");
			break;
		}
		vr->line[strcspn(vr->line, "\n")] = '\0';
		if ((strncmp(vr->line, "./", 2) == 0 || (strncmp, "/", 1) == 0))
		{
			//vr->argv = _tokenizer(vr->line, " \n\t");
			child_pid = fork();
			if (child_pid == -1)
			{
				perror("./hsh");
				exit(EXIT_FAILURE);
			}
			else if (child_pid == 0)
			{
				printf("hi\n");
				/*if (execve(argv[0], argv, environ) == -1)
				{
					perror("./hsh");
					}*/
			}
			else
			{
				wait(&status);
			}
		}
		else
		{
			write(1, line, nread);
		}
	}
	free(vr->line);
     	return (0);
}
