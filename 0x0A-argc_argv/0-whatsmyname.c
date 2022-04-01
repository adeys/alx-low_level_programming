#include <stdio.h>

/**
 * main - prints the program name
 * @argc: command line args count
 * @argv: command line args
 * Return: 0 always
 */
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", argv[0]);

	return (0);
}
