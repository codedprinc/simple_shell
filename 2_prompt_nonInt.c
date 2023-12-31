#include "header.h"
/**
 * prompt_nI - prompt for the hsh shell in nonInteractive mode.
 * @incmd: takes cmd from the pipe cmd
 */
void prompt_nI(char *getdata, int k)
{
/*	char *getdata_2 = NULL;*/
	char dupdata[BUFSIZE];

	strcpy(dupdata,getdata);
	printf("prompt_nI has: %d [%d]\n", dupdata[1], k);
/*	builtin_cmd(dupdata);*/
}
