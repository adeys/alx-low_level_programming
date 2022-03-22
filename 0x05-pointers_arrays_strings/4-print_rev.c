#include "main.h"

/**
 * print_rev - Prints a string in reverse order
 * @s: The string to print
 * Return: void
 */
void print_rev(char *s)
{
	char *start;

	start = s;
	while (*s != '\0')
		s++;

	s--;
	while (s >= start)
	{
		_putchar(*s--);
	}

	_putchar('\n');
}
