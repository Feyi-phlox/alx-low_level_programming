#include <stdio.h>

/**
 * main - prints alphabet in lowercase followed by a new line
 *
 * Return: 0 when unsuccessful
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
		return (0);
}
