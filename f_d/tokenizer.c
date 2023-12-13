#include "main.h"
/**
 * _tokenizer - splits strings into tokens.
 * @cmd: points to the command.
 * @delim: delimiter to make the tokens.
 * Return: Returns argv.
 */
char **_tokenizer(char *cmd, char *delim)
{
	globalVars->cpcmd = _strdup(cmd);
	globalVars->cpcmd2 = _strdup(cmd);
	globalVars->token = strtok(cpcmd, delim);
	while (globalVars->token != NULL)
	{
		globalVars->n_tokens++;
		globalVars->token = strtok(NULL,delim);
	}

	globalVars->argv_1 = malloc((n_tokens + 1) * sizeof (char*));
	globalVars->token = strtok(cpcmd2, delim);
	while (globalVars->token != NULL)
	{
		globalVars->argv_1[i] = malloc((_strlen (token) + 1) * sizeof (char));
		_strcpy(globalVars->argv_1[i], globalVars->token);
		globalVars->token = strtok(NULL, delim);
		i++;
	}
	globalVars->argv_1[i] = NULL;
	free(globalVars->cpcmd);
	free(globalVars->cpcmd2);
	return(globalVars->argv_1);
}
