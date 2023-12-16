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
void non_Interactive(char *inputbuf, int j)
{
	char dupbuf[BUFSIZE];

	strcpy(dupbuf, inputbuf);
	printf("%s: [%d]\n",dupbuf, j);
	prompt_nI(dupbuf, j);
}
