#include "function_pointers.h"

/**
 * array_iterator - executes @action on each element of an array
 * @array: array to process
 * @size: @array's size
 * @action: action to execute
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
