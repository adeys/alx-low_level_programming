#include <stddef.h>
#include "main.h"

/**
 * contains- Checks if a string contains a character
 * @s: string to search within
 * @c: character to search
 * Return: 1 if @c is found, 0 otherwise
 */
int contains(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (c == s[i])
			return (1);
	}

	return (0);
}

/**
 * _strpbrk - Search a string for any of a set of bytes
 * @s: string to search within
 * @accept: set of bytes to search
 * Return: pointer to the byte in @ø that matches one of the bytes in @accept
 * NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (contains(accept, s[i]))
			return s + i;
	}

	return (NULL);
}
