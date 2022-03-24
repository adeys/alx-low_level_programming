#include "main.h"

/**
 * is_sep - Checks wether a character is a word separator
 * @c: character to check
 * Return: 1 if @c is a seperator, 0 otherwise
 */
int is_sep(char c)
{
	switch (c)
	{
		case ' ':
		case '\t':
		case '\n':
		case ',':
		case ';':
		case '.':
		case '!':
		case '?':
		case '"':
		case '(':
		case ')':
		case '{':
		case '}':
			return (1);
		default:
			return (0);
	}
}

/**
 * cap_string - Capitalizes all words of a string
 * @str: string to process
 * Return: pointer to result string
 */
char *cap_string(char *str)
{
	int i, c;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i != 0 && !is_sep(str[i - 1]))
			continue;

		c = str[i];
		if (c >= 'a' && c <= 'z')
			str[i] = c - 'a' + 'A';
	}

	return (str);
}
