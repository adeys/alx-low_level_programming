#include <stdio.h>

/**
 * main - Entrypoint
 * Prints the alphabet in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
		putchar(c++);
	putchar('\n');

	return (0);
}
