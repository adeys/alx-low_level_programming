#include "main.h"

/**
 * print_alphabet_x10 - Print 10 times the alphabet
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c++);
		}
		_putchar('\n');
	}
}
