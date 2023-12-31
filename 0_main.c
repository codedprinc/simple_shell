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
		r_read = read(0, buf, BUFSIZE - 1);
		if (r_read > 0)
		{
			buf[r_read - 1] = '\0';
			/*printf("%s\n", buf);*/
			non_Interactive(buf);
		}
	}
	return (0);
}
