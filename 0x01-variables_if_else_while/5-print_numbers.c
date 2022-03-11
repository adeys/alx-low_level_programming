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

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}

	putchar('\n');

	return (0);
}
