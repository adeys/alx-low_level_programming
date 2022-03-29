#include <stddef.h>
#include "main.h"

/**
 * _strstr - Locates a string
 * @haystack: string to search within
 * @needle: searched string
 * Return: pointer to the beginning of the located string
 * NULL if no such byte is found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *ptr;

	for (i = 0, ptr = NULL; haystack[i] != '\0'; i++)
	{
		if (haystack[i] != needle[0])
			continue;

		j = 0;
		ptr = haystack + i;
		while (needle[j] != '\0')
		{
			if (needle[j] != haystack[i + j])
			{
				ptr = NULL;
				break;
			}
			j++;
		}

		break;
	}

	return (ptr);
}
