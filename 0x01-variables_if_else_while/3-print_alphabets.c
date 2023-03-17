#include <stdio.h>

/**
 *main - prints alphabets in lowercase and then uppercase
 *
 * Return: 0 when unsuccessful
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (i = 'A' ; i <= 'Z' ; i++)
		putchar(i);
	putchar('\n');
		return (0);
}
