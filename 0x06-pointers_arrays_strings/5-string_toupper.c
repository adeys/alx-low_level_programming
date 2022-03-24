#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string
 * to uppercase
 * @str: string to process
 * Return: pointer to result string
 */
char *string_toupper(char *str)
{
	int i, c;

	for (c = str[i = 0]; str[i] != '\0'; c = str[++i])
	{
		if (c >= 'a' && c <= 'z')
			str[i] = c - 'a' + 'A';
	}

	return (str);
}
