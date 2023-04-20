#include "3-calc.h"

/**
 * op_add - function that returns the sum of a and b
 * @a: first integer
 * @b: second integer
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}

/**
 * op_sub - function that returns the difference of a and b
 * @a: first integer
 * @b: second integer
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that returns the product of a and b
 * @a: first integer
 * @b: second integer
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that returns the division result of a and b
 * @a: first integer
 * @b: second integer
 * Return: result of the division of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - funtion that returns the remainder of the division of a and b
 * @a: first integer
 * @b: second integer
 * Return: remainder of the division of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
