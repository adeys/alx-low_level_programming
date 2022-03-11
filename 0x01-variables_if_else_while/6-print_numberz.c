#include <stdio.h>

/**
 * main - Entrypoint
 * Prints all signle digit numbers of base 10
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	i = 48;
	while (i <= 57)
		putchar(i++);

	putchar('\n');

	return (0);
}
