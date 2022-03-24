#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @str: string to encode
 * Return: pointer to result string
 */
char *rot13(char *str)
{
	int i, j;
	char *src, *map;

	src = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	map = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == src[j])
			{
				str[i] = map[j];
				break;
			}
		}
	}

	return (str);
}
