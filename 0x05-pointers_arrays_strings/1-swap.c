#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: The first integer to swap
 * @b: The second integer to swap
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
