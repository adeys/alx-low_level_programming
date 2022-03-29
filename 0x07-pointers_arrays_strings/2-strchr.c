#include <stddef.h>
#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: pointer to the string to search within
 * @c: character to search for
 * Return: pointer to the first occurence of @c
 * NULL if @c is not found
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	if (c == '\0')
		return (s + i);

	return (NULL);
}
