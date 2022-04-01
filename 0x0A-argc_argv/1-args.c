#include <stdio.h>

/**
 * main - prints the number of arguments passed into the program
 * @argc: command line args count
 * @argv: command line args
 * Return: 0 always
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
