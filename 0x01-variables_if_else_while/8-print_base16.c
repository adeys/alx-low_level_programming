#include <stdio.h>

/**
 * main - Entrypoint
 * Prints the hexadecimal single digits
 *
 * Return: Always 0
 */
int main(void)
{
	int c = 48;

	/* Prints the digits 0(48) to 9(57) */
	while (c <= 57)
		putchar(c++);

	/* Prints the letters a(97) to f(102) */
	c = 97;
	while (c <= 102)
		putchar(c++);

	putchar('\n');

	return (0);
}
