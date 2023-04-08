#include "main.h"

/**
 * main - function that prints the multiplication result of two numbers
 *@argc: argument count
 *@argv: argument vector
 *Return: 0 or 1 if program does not receive 2 arguments
 */

int main(__attribute__((unused))int argc, char *argv[])
{
	int i, j, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	mul = i * j;
	{
		printf("%d\n", mul);
	}
	return (0);
}
