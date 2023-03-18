#include <stdio.h>

/**
 * main - prints lowercase alphabet in reverse
 *
 * Return: 0 when unsuccessful
 */

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);

}
