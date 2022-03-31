#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string
 * Return: the length of @s
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}

/**
 * _is_pal - checks palindrome
 * @s: string to check
 * @i: current index
 * Return: 1 if @c is mirrored in @s
 */
int _is_pal(char *s, int i)
{
	if (*s == *(s + i))
		return (_is_pal(s + i, i - 1));

	return (0);
}

/**
 * is_palindrome - detects if a string is a palindrome.
 * @s: string.
 * Return: 1 if s is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	int length;

	length = _strlen(s);

	if (length == 0)
		return (1);
	else
		return (_is_pal(s, length - 1));
}
