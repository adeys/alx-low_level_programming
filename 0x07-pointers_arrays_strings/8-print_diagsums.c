#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals
 * @a: pointer to the matrix
 * @size: matrix size
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int left, right, i;

	/* upper left diagonal sum */
	for (i = 0, left = 0; i < size; i++)
		left += a[(i * size) + i];

	/* upper right diagnoal sum  */
	for (i = 0, right = 0; i < size; i++)
		right += a[(i * size) + (size - i - 1)];

	printf("%d, %d\n", left, right);
}
