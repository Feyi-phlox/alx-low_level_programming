#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string that is reversed
 * Return: always 0
 */

void rev_string(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	for (i = count ; i >= 0; i--)
		count--;
	_putchar(s[i]);
}
