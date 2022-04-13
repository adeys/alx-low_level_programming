#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to process
 * @size: @array's size
 * @cmp: comparator function
 * Return: index of the first matching element,
 * -1 if no element matches of if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if ((cmp == NULL) || (size <= 0))
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
