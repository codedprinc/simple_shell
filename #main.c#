#include "main.h"
/**
 * main - entry point to the shell -hsh.
 * @void: no argument.
 *
 * Return: 0 on success.
 */
int main(void)
{
	while(1)
	{
		write(1,"$c_is_fun$ ", 11);
		nread = getline(&line, &len, stdin);
		if (nread == -1)
		{
			perror(" ");
			break;
		}
		line[_strcspn(line, "\n")] = '\0';
		if ((_strncmp(line, "./", 2) == 0 || (_strncmp, "/", 1) == 0))
		{
			argv = _tokenizer(line, " \n\t");
			child_pid = fork();
			if (child_pid == -1)
			{
				perror("./hsh");
				exit(EXIT_FAILURE);
			}
			else if (child_pid == 0)
			{
				if (execve(argv[0], argv, environ) == -1)
				{
					perror("./hsh");
				}
			}
			else
			{
				wait(&status);
			}
		}
		else
		{
			write(1, line, nread);
		}
	}
	free(line);
}
