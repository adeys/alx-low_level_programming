#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: String to add @src
 * @src: String to append
 * Return: Pointer to the resulting string @dest
 */
char *_strcat(char *dest, char *src)
{
	char *result;
	int i;

	result = dest;
	while (*result != '\0')
		result++;

	i = 0;
	while (src[i] != '\0')
		*(result)++ = src[i++];

	*result = '\0';

	return (dest);
}
