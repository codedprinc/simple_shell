#include "main.h"
/**
 * _strscpn - calculates the length of the initial segment of s which consists
 *  of characters not in reject.
 * @s: holds the char.
 * @reject: char needed.
 * Return: count.
 */
size_t _strcspn(const char *s, const char *reject) {
	size_t count = 0;
	while (*s != '\0') {
		const char *r = reject;
		while (*r != '\0') {
			if (*s == *r) {
				return count;
			}
			r++;
		}
		s++;
		count++;
	}
	return count;
}

/**
 * _strncmp - compares the first n characters of two strings s1 and s2.
 * @s1: string 1.
 * @s2: string 2.
 * @n: number if chars.
 * Return: 0 if it works.
 */
int _strncmp(const char *s1, const char *s2, size_t n) {
	while (n > 0) {
		if (*s1 != *s2) {
			return (*s1 - *s2);
		}
		if (*s1 == '\0') {
			break;
		}
		s1++;
		s2++;
		n--;
	}
	return 0;
}

/**
 * _strlen - Calculate the length of a string.
 * @s: The input string.
 * Return: The length of the string.
 */
size_t _strlen(const char *s) {
	size_t len = 0;

	while (s[len] != '\0') {
		len++;
	}

	return len;
}

/**
 * _strcpy - Copy a string.
 * @dest: Destination buffer.
 * @src: Source string.
 * Return: A pointer to the destination buffer.
 */
char *_strcpy(char *dest, const char *src) {
	char *originalDest = dest;

	while ((*dest++ = *src++) != '\0')
	{
		/*continue copying until null terminator is reached*/
	}

	return originalDest;
}

/**
 * _strncpy - Copy n characters from source to destination.
 * @dest: Destination buffer.
 * @src: Source string.
 * @n: Number of characters to copy.
 * Return: A pointer to the destination buffer.
 */
char *_strncpy(char *dest, const char *src, size_t n) {
	char *originalDest = dest;

	while (n > 0 && (*dest++ = *src++) != '\0')
	{
		n--;
	}

	while (n-- > 0) {
		*dest++ = '\0';
	}
	return originalDest;
}
