#include "main.h"

/**
 * _sqrt - returns the natural square root of a number.
 * @x: number to check
 * @y: square root
 * Return: square root or -1 if error
 */
int _sqrt(int x, int y)
{
	if (x > (y / 2))
		return (-1);
	else if ((x * x) == y)
		return (x);

	return (_sqrt(x + 1, y));
}

/**
 * _sqrt_recursion - computes the natural square root of a number
 * @n: input number
 * Return: natural @n's square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	return (_sqrt(0, n));
}
