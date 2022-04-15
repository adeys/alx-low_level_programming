#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string separator
 * @n: string count
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i, sep;
	char *str;
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

		str = va_arg(vl, char *);
		printf("%s", str != NULL ? str : "(nil)");
	}

	va_end(vl);
	printf("\n");
}
