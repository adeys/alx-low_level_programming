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

	c = 'A';
	while (c <= 'Z')
		putchar(c++);

	putchar('\n');

	return (0);
}

