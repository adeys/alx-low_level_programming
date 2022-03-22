#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: string to be printed
 * Return: void
 */
void puts_half(char *str)
{
	int length, start, i;

	length = 0;

	while (str[length] != '\0')
		length++;

	if (length % 2 != 0)
		start = ((length - 1) / 2);
	else
		start = (length / 2);

	for (i = start; i < length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
