#include <stddef.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array of chars,
 * and initializes it with a specific char
 * @size: array size
 * @c: initialization character
 * Return: pointer to the array or NULL if @size = 0 or if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array)
	{
		for (i = 0; i < size; i++)
			array[i] = c;
	}

	return (array);
}
