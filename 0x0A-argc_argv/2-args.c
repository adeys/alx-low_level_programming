#include <stdio.h>

/**
 * main - prints all arguments passed into the program
 * @argc: command line args count
 * @argv: command line args
 * Return: 0 always
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
