#include "header.h"
/**
 * main - entry point to the program.
 * @void: no arg.
 * Return: 0 if successful.
 */
int main(void)
{
	char buf[BUFSIZE] = NULL;
	ssize_t r_read;
	if (isatty(STDIN_FILENO) == 1)
	{
		interactive();
	}
	else
	{
		r_read = read(0, buf, BUFSIZE);
		if (r_read > 0)
		{
			non_Interactive(buf);
		}
		else
		{
			perror("PIPE ERROR:");
			exit(EXIT_FAILURE);
		}
	}
	return(0);
}
