#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings into a single one
 * @s1: first string
 * @s2: second string
 * Return: pointer to the result string
 */
char *str_concat(char *s1, char *s2)
{
	int l1, l2;
	char *str;

	l1 = s1 ? _strlen(s1) : 0;
	l2 = s2 ? _strlen(s2) : 0;

	str = malloc((sizeof(char) * (l1 + l2)) + 1);

	if (!str)
		return (NULL);

	if (l1)
		_strcpy(str, s1);

	if (l2)
		_strcpy(str + l1, s2);

	str[l1 + l2] = '\0';

	return (str);
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

/**
 * *_strcpy - Copies string from @src to @dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	return (dest);
}
