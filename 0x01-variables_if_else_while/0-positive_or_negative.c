#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entrypoint
 * Prints wether a number is positive, negative or zero
 *
 * Return: 0 always
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d is ", n);

	if (n > 0)
		printf("positive");
	else if (n < 0)
		printf("negative");
	else
		printf("zero");

	printf("\n");

	return (0);
}
