#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: String to add @src
 * @src: String to append
 * @n: Max bytes to use from @src
 * Return: Pointer to the resulting string @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *result;
	int i;

	result = dest;
	while (*result != '\0')
		result++;

	i = 0;
	while ((i < n) && (src[i] != '\0'))
		*(result++) = src[i++];

	*result = '\0';

	return (dest);
}
