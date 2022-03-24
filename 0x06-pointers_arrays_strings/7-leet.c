#include "main.h"

/**
 * leet - Encodes a string to 1337
 * @str: string to encode
 * Return: pointer to result string
 */
char *leet(char *str)
{
	int i, j;
	char *letters, *map;

	letters = "aAeEoOtTlL";
	map = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == letters[j])
				str[i] = map[j];
		}
	}

	return (str);
}
