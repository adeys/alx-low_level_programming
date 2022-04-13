#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs simple mathematic operations
 * @argc: args count
 * @argv: provided args
 * Return: 0 if there's no error
 * 98 if the number of args is wrong
 * 99 if non supported operator
 * 100 if user tries to divide by 0
 */
int main(int argc, char **argv)
{
	int a, b;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Error\n");
		return (99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((b == 0) && ((func == op_div) || (func == op_mod)))
	{
		printf("Error\n");
		return (100);
	}

	printf("%d\n", func(a, b));
	return (0);
}
