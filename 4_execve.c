#include "header.h"
/**
 * builtin_cmd - executes built in command.
 * @inputcmd: command to be executed.
 * Return: 0 if successful, 1 if not.
 */
int builtin_cmd(char *inputcmd)
{
	char **argv;
	char dupcmd[BUFSIZE];

	strcpy(dupcmd, inputcmd);
	argv = _tokenize(dupcmd, " \n\t");
	if (execve(argv[0], argv, NULL) == -1)
	{
		perror("ERROR:");
		return (1);
	}
	else
	{
		return (0);
	}
}
