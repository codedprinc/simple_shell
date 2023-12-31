#include "header.h"
/**
 * intercative - brings up prompt for hsh shell.
 * @void: no argument.
 */
void interactive(void)
{
	prompt();
}

/**
 * non_Intercative - does something (yet).
 * @inputbuf: data from read sys call.
 */
void non_Interactive(char *inputbuf)
{
	char dupbuf[BUFSIZE];
	int i = 0;
	char * token;

	strcpy(dupbuf, inputbuf);
	token = strtok(dupbuf, "\n");

	while (token != NULL)
	{
		printf("%s: %d\n", token, i);
		prompt_nI(token);
		token = strtok(NULL, "\n");
		i++;
	}
	/*prompt_nI(dupbuf);*/
}
