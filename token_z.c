#include "hshell.h"
/**
 * _tokenizer - splits strings into tokens.
 * @cmd: points to the command.
 * @delim: delimiter to make the tokens.
 * Return: Returns argv.
 */
char **_tokenizer(char *cmd, char *delim, tok_st *inpu)
{
        inpu->cpmd = strdup(cmd);
        inpu->cpmcd2 = strdup(cmd);
        inpu->token = strtok(inpu->cpmd, delim);
        while (inpu->token != NULL)
        {
                inpu->n_tok++;
                inpu->token = strtok(NULL,delim);
        }

        inpu->argv_1 = malloc((inpu->n_tok + 1) * sizeof (char*));
        inpu->token = strtok(inpu->cpmcd2, delim);
        while (inpu->token != NULL)
        {
                inpu->argv_1[inpu->ic] = malloc((strlen (inpu->token) + 1) * sizeof (char));
                strcpy(inpu->argv_1[inpu->ic], inpu->token);
                inpu->token = strtok(NULL, delim);
                inpu->ic++;
        }
        inpu->argv_1[inpu->ic] = NULL;
        free(inpu->cpmd);
        free(inpu->cpmcd2);
        return(inpu->argv_1);
}
