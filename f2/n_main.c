#include "hshell.h"
mj_var vr = {NULL, NULL, NULL, 0, 0, 0};
mj_var *getGlobalVariables(void) {
	return &vr;
}
/**
 * main - entry point to program.
 * @void: no.
 * Return: 0 if ok.
 */
int main(int ac, char **av)
{
	(void) ac;
	(void) av;
	//mj_var vr[] = { VAR_VAL };

	while(1)
	{
		write(1, "($) ", 4);
		vr.nread = getline(vr.line, vr.len, stdin);
		if (vr.nread == -1)
		{
			perror("kill: ");
			break;
		}
		/*
		vr.line[strcspn(vr.line, "\n")] = '\0';
		if ((strncmp(vr.line, "./", 2) == 0 || strncmp(vr.line, "/", 1) == 0))
		{
			//vr->argv = _tokenizer(vr->line, " \n\t");
			vr.child_pid = fork();
			if (vr.child_pid == -1)
			{
				perror("./hsh");
				exit(EXIT_FAILURE);
			}
			else if (vr.child_pid == 0)
			{
				printf("hi\n");
				/*if (execve(argv[0], argv, environ) == -1)
				{
					perror("./hsh");
					}/
			}
			else
			{
				wait(&vr.status);
			}
		}*/
		else
		{
			write(1, vr.line, vr.nread);
		}
	}
	free(vr.line);
     	return (0);
}
