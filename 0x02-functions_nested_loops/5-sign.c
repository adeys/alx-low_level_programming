#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: The number to check
 *
 * Return: 1 if @n is greater than zero, 0 if n is zero and -1 otherwise
 */
int print_sign(int n)
{
	int c, r;

	if (n > 0)
	{
		c = '+';
		r = 1;
	}
	else if (n < 0)
	{
		c = '-';
		r = -1;
	}
	else
	{
		c = '0';
		r = 0;
	}

	_putchar(c);
	return (r);
}
