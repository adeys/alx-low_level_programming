#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

/**
 * main - adds positive nuùbers
 * @argc: command line args count
 * @argv: command line args
 * Return: 1 if it receives invalid arguments, 0 otherwise
 */
int main(int argc, char **argv)
{
	int i, n, sum;
	char *nptr, *endptr;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			nptr = argv[i];
			n = strtol(nptr, &endptr, 10);
			if (nptr == endptr || errno != 0)
			{
				printf("Error\n");
				return (1);
			}

			sum += n;
		}

		printf("%d\n", sum);
	}

	return (0);
}
