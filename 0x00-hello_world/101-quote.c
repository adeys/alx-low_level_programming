#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 * Prints a string to stderr
 *
 * Return: Always 1
 */
int main(void)
{
	fwrite(
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
		sizeof(char),
		59,
		stderr
	);
	return (1);
}
