#include "main.h"
/**
 * _strdup - Duplicate a string.
 * @s: The input string to be duped.
 * Return: a pointer to the newly allocated mem containing a dup.
 */
char *_strdup(const char *s)
{
	size_t len = 0;
	char *duplicate = malloc((len + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	while (s[len] != '\0')
	{
		len++;
	}
	if (duplicate == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		duplicate[i] = s[i];
	}
	return (duplicate);
}
