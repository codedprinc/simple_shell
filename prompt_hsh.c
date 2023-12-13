#include "hshell.h"
/**
 * readIn - prints the command prompt for the shell.
 * @input: pointer to a struct.
 */

void readIn(prom_st *input)
{
/*	tok_st nizer = { tk_uI };*/
	while(1)
	{
		write(1, "($) ", 4);
		input->n_read = getline(&(input->line), &(input->len), stdin);
		if (input->n_read == -1)
                {
                        perror(" ");
                        break;
                }
		if (input->n_read == 0)
		{
			write(1, "\n", 1);
			break;
		}

		input->line[strcspn(input->line, "\n")] = '\0';
		/*if (strncmp(input->line, "./", 2) == 0 || strncmp(input->line, "/", 1) == 0)*/
		/*{*/

			input->argv = _tokenizer(input->line, " \n\t");
		if (input->argv[0] != NULL)
		{
			input->child_pid = fork();
                        if (input->child_pid == -1)
                        {
                                perror("./hsh");
                                exit(EXIT_FAILURE);
                        }
                        else if (input->child_pid == 0)
                        {
                                execve(input->argv[0], input->argv, environ);
				perror("./hsh");

				_exit(EXIT_FAILURE);
                        }
                        else
                        {
                                wait(&(input->status));
                        }
		}
		/*write(1, input->line, strlen(input->line));
		  write(1, "\n", 1);*/
		free(input->argv);
	}
	free(input->line);
}
