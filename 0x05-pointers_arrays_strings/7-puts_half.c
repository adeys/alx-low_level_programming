#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: string to be printed
 * Return: void
 */
void puts_half(char *str)
{
	int length, i;

	length = 0;

	while (str[length] != '\0')
		length++;

	if (length % 2 == 0)
		i = length / 2;
	else
		i = ((length - 1) / 2) + 1;

	while (i < length)
		_putchar(str[i++]);

	_putchar('\n');
}
