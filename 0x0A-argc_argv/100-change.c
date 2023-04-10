#include "main.h"

/**
 * main - program that prints the minimum number of coins
 * to make change for an amount of money
 *@argc: argument count
 *@argv: argument vector
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i, change;
	int coins[] = {25, 10, 15, 2, 1};
	int num;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	change = 0;
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= coins[i])
		{
			change++;
			num -= coins[i];
		}
	}
	printf("%d\n", change);
	return (0);
}
