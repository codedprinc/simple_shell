#include "main.h"
/**
 * _tokenizer - splits strings into tokens.
 * @cmd: points to the command.
 * @delim: delimiter to make the tokens.
 * Return: Returns argv.
 */
char **_tokenizer(char *cmd, char *delim)
{
	char **argv;
	char *cpcmd = strdup(cmd);
	char *cpcmd2 = strdup(cmd);
	int n_tokens = 0, i = 0;

	char *token = strtok(cpcmd, delim);
	while (token != NULL)
	{
		n_tokens++;
		token = strtok(NULL,delim);
	}

	argv = malloc((n_tokens + 1) * sizeof (char*));
	token = strtok(cpcmd2, delim);
	while (token != NULL)
	{
		argv[i] = malloc((strlen (token) + 1) * sizeof (char));
		strcpy(argv[i], token);
		token = strtok(NULL, delim);
		i++;
	}
	argv[i] = NULL;
	free(cpcmd);
	free(cpcmd2);
	return(argv);
}
