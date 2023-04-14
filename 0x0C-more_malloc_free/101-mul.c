#include "main.h"

/**
 * mul - function that multiplies two positive numbers
 * @i: positive multiplier
 * @j: positive multiplier
 * Return: result of multiplication
 */

int mul(unsigned long i, unsigned long j)
{
	int prod;

	prod = i * j;
	return (prod);
}
/**
 * main - multiplies two positive integers
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0 if successful, else 1
 */
int main(int argc, char *argv[])
{
	unsigned long i, j;

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}
	if (argv[1] == NULL || argv[2] == NULL)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}
	if (atoi(argv[1]) < 0 || atoi(argv[2]) < 0)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}
	if (atoi(argv[1]) == 0 || atoi(argv[2]) == 0)
	{
		_putchar('0');
		exit(0);
	}
	i = strtoull(argv[1], NULL, 10);
	j = strtoull(argv[2], NULL, 10);
	mul(i, j);
	_putchar('0' + mul(i, j));
	_putchar('\n');
	return (0);
}
