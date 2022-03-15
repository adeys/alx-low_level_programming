#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 * Return: void
 */
void times_table(void)
{
	int a, b, c;

	c = -1;
	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = a * b;

			if (b != 0)
			{
				_putchar(',');
				_putchar(' ');

				if (c < 10)
					_putchar(' ');
			}

			if (c < 10)
				_putchar('0' + c);
			else
			{
				_putchar('0' + (c / 10));
				_putchar('0' + (c % 10));
			}
		}
		_putchar('\n');
	}
}
