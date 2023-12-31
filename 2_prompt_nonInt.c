#include "header.h"
/**
 * prompt_nI - prompt for the hsh shell in nonInteractive mode.
 * @incmd: takes cmd from the pipe cmd
 */
void prompt_nI(char *incmd)
{
	char dupdata[BUFSIZE];
	pid_t child;
	int wait2;

	strcpy(dupdata, incmd);
	printf("prompt_nI has: %s\n", dupdata);
	child = fork();
	if (child == 0)
	{
		builtin_cmd(dupdata);
	}
	else
	{
		wait(&wait2);
		usleep(1000);
	}
}
