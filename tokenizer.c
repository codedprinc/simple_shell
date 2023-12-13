#include "main.h"
/**
 * _tokenizer - splits strings into tokens.
 * @cmd: points to the command.
 * @delim: delimiter to make the tokens.
 * Return: Returns argv.
 */
char **_tokenizer(char *cmd, char *delim)
{
	cpcmd = strdup(cmd);
	cpcmd2 = strdup(cmd);
	token = strtok(cpcmd, delim);
	while (token != NULL)
	{
		n_tokens++;
		token = strtok(NULL,delim);
	}

	argv_1 = malloc((n_tokens + 1) * sizeof (char*));
	token = strtok(cpcmd2, delim);
	while (token != NULL)
	{
		argv_1[i] = malloc((_strlen (token) + 1) * sizeof (char));
		_strcpy(argv_1[i], token);
		token = strtok(NULL, delim);
		i++;
	}
	argv_1[i] = NULL;
	free(cpcmd);
	free(cpcmd2);
	return(argv_1);
}
