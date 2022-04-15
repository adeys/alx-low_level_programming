#include "variadic_functions.h"

/**
 * sum_them_all - computes the sum of all its parameters
 * @n: Numeber of args
 * Return: sum of all the args
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list vl;

	if (n == 0)
		return (0);

	va_start(vl, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(vl, int);

	va_end(vl);

	return (sum);
}
