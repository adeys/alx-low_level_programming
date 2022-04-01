#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make a change
 * for an amount of money
 * @argc: command line args count
 * @argv: command line args
 * Return: 1 if it receive more than 1 argument, 0 otherwise
 */
int main(int argc, char **argv)
{
	int i, n, money, coins;
	int cents[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]);

	if (money < 0)
	{
		printf("0\n");
		return (0);
	}

	coins = 0;
	for (i = 0; money != 0 && i < 5; i++)
	{
		if (money >= cents[i])
		{
			n = money / cents[i];
			coins += n;
			money -= n * cents[i];
		}
	}

	printf("%d\n", coins);

	return (0);
}
