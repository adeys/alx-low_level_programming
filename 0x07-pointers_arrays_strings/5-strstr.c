#include <stddef.h>
#include "main.h"
#include <stdio.h>

/**
 * _strstr - Locates a string
 * @haystack: string to search within
 * @needle: searched string
 * Return: pointer to the beginning of the located string
 * NULL if no such byte is found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, found;
	char *ptr;

	if (*needle == '\0')
		return (haystack);


	ptr = NULL;
	for (i = 0, found = 0; haystack[i] != '\0' && !found; i++)
	{
		if (haystack[i] != needle[0])
			continue;

		j = 0;
		ptr = haystack + i;
		found = 1;
		while (needle[j] != '\0')
		{
			if (needle[j] != haystack[i + j])
			{
				ptr = NULL;
				found = 0;
				break;
			}
			j++;
		}
	}

	return (ptr);
}
