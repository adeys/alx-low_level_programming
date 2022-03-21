#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: The string to use
 * Return: The value of the length of the string
 */
int _strlen(char *s)
{
	char *start = s;

	while (*s != '\0')
		s++;

	return (s - start);
}
