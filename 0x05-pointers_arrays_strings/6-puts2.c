#include "main.h"

/**
 * puts2 - prints every other character of a string
 *@str: parameter to be printed
 * Return: always 0
 */

void puts2(char *str)
{
	int i;
	int j = 0;
	
	while (str[j] != '\0')
	{
		j++;
	}
	for (i = 0 ; i < j; i += 2)
	{
		_putchar(str[i]);

	}
	_putchar('\n');
}
