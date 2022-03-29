#include "main.h"

/**
 * _memset - Fills the memory with a constant byte
 * @s: pointer to the memory area to fill
 * @b: byte to use to fill the memory
 * @n: first number of bytes to fill
 * Return: pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
