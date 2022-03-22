#include "main.h"

/**
 * puts2 - Prints one char out of 2 of a string
 * @str: string to print the chars from
 * Return: void
 */
void puts2(char *str)
{
	int length, i;

	length = 0;

	while (str[length] != '\0')
		length++;

	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
