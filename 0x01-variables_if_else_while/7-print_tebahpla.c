#include <stdio.h>

/**
 * main - Entrypoint
 * Prints lowercase alphabet in reverse order
 *
 * Return: Always 0
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
		putchar(c--);
	putchar('\n');

	return (0);
}
