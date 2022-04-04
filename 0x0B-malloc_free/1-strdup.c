#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * _strdup - Copies a string to a new memory area
 * @str: the string to copy
 * Return: pointer to the newly allocated space
 */
char *_strdup(char *str)
{
	int i, len;
	char *copy;

	if (str == NULL)
		return (NULL);

	len = _strlen(str);
	copy = malloc((sizeof(char) * len) + 1);
	if (!copy)
		return (NULL);

	for (i = 0; i < len; i++)
		copy[i] = str[i];

	copy[len] = '\0';

	return (copy);
}

/**
 * _strlen - Returns string length
 * @str: string to process
 * Return: the string length
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}
