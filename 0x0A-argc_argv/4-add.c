#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

/**
 * _isdigit - checks if a character is a digit
 * @c: character to check
 * Return: 1 if @c is a digit, 0 otherwise
 */
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _isnumeric - checks if a string contains valid numeric values
 * @s: string to check
 * Return: 1 if @s is valid, 0 otherwise
 */
int _isnumeric(char *s)
{
	int i, neg;

	if (s[0] == '-')
	{
		neg = 1;
		i = 1;
	}
	else
	{
		neg = 0;
		i = 0;
	}

	for (; s[i] != '\0'; i++)
	{
		if (!_isdigit(s[i]))
			return (0);
	}

	if (i == 1 && neg)
		return (0);
	else
		return (1);
}

/**
 * main - adds positive nuùbers
 * @argc: command line args count
 * @argv: command line args
 * Return: 1 if it receives invalid arguments, 0 otherwise
 */
int main(int argc, char **argv)
{
	int i, sum;
	char *nptr;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		nptr = argv[i];
		if (_isnumeric(nptr))
		{
			sum += atoi(nptr);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);

	return (0);
}
