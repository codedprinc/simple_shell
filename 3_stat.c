#include "header.h"
/**
 * file_checker - checks if the file exists.
 * @data: gets the data to be checked.
 * Return: 0 if found, 1 if not found.
 */
int file_checker(char *data)
{
	int flag = 0;
	char reader[BUFSIZE];
	struct stat st;

	strcpy(reader, data);
	if (stat(reader, &st) == 0)
	{
		return (flag);
	}
	else
	{
		flag = 1;
		return (flag);
	}
}
