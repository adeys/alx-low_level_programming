#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: number separator
 * @n: number count
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, sep;
	va_list vl;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(vl, n);
	sep = separator != NULL;

	for (i = 0; i < n; i++)
	{
		if (sep && i != 0)
			printf("%s", separator);

		printf("%d", va_arg(vl, int));
	}

	va_end(vl);
	printf("\n");
}
