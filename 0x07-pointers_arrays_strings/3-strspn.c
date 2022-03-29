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
 * _strspn - Gets the length of a prefix substring
 * @s: string to search within
 * @accept: bytes to search
 * Return: number of bytes in the initial segment of @s
 * which consist only of bytes of @accept
 */
int _strspn(char *s, char *accept)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (!contains(accept, s[i]))
			break;
	}

	return (i);
}
