#include <stdio.h>

/**
 * main - prints the first Fibonacci numbers
 * Return: 0 when unsuccessful
 */

int main(void)
{
	int count = 3;

	long int first = 1, second = 2;
	long int next = first + second;

	printf("%lu, ", first);
	printf("%lu, ", second);
	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%lu\n", next);
		}
		else
		{
			printf("%lu, ", next);
		}
		first = second;
		second = next;

		next = first + second;
		count++;
	}
	return (0);
}
