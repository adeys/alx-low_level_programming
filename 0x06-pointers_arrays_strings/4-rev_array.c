#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: The array to reverse content from
 * @n: The array size
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0, j = n - 1; i < n / 2; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
