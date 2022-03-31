#include "main.h"

/**
 * is_prime - actually tests if @n is prime
 * @n: number to test
 * @i: divisor
 * Return: 1 if @n is prime number, 0 otherwise
 */
int is_prime(int n, int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}

	return (is_prime(n, c + 1));
}

/**
 * is_prime_number - detects if a number is prime
 * @n: number to check
 * Return: 1 if @n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime(n, 2));
}
