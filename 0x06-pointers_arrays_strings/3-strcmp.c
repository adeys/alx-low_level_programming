#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: First string to compare
 * @s2: Second string to compare
 * Return: 0 if @s1 and @s2 are equal, negative value if @s1 < @s2,
 * positive value if @s1 > @s2
 */
int _strcmp(char *s1, char *s2)
{
	int i, cmp;

	for (i = 0; (s1[i] != '\0') && (s2[i] != '\0'); i++)
	{
		cmp = s1[i] - s2[i];
		if (cmp != 0)
			return (cmp);
	}

	return (s1[i] - s2[i]);
}
