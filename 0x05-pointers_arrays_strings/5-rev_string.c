#include <stdlib.h>
#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: The string to reverse
 * Return: void
 */
void rev_string(char *s)
{
	int length, i;
	char tmp;

	length = 0;
	while (s[length] != '\0')
		length++;

	for (i = 0; i < length / 2; i++)
	{
		tmp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = tmp;
	}
}
