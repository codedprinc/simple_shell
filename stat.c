#include "header.h"
/**
 * file_checker - checks if the file exists.
 * @data: gets the data to be checked.
 */
void file_checker(char *data)
{
	char reader[BUFSIZE];
	struct stat st;

	strcpy(reader, data);
	if (stat(reader, &st) == 0)
	{
		printf("\nFOUND\n");
	}
	else
	{
		printf("\nNOT FOUND\n");
	}
}
