#include "header.h"
/**
 * main - entry point to the program.
 * @void: no arg.
 * Return: 0 if successful.
 */
int main(void)
{
	char buf[BUFSIZE];
	ssize_t r_read;

	if (isatty(STDIN_FILENO) != 0)
	{
		interactive();
	}
	else
	{
		while((r_read = read(0, buf, sizeof(buf) - 1)) > 0)
		{
			buf[r_read] ='\0';
			non_Interactive(buf);
		}
		if (r_read == -1)
		{
			perror("PIPE ERROR:");
			exit(EXIT_FAILURE);
		}
	}
	return (0);
}
