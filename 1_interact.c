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
 * @void: no argument.
 */
void non_Interactive(char **arptr)
{
	int i = 0;
	while (arptr != NULL)
	{
		printf("%s", arptr[i]);
		i++;
	}
}
