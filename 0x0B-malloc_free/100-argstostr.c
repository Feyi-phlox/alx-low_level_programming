#include "main.h"

/**
 * *argstostr -  function that concatenates all the arguments of your program
 *@ac:argument count
 *@av: argument vector
 * Return: a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int a;
	int b;
	int c = 0, d = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; ac > a; a++)
	{
		for (b = 0; av[a][b]; b++)
			d++;
	}
	d = d + ac;
	str = malloc(sizeof(char) * d + 1);
	if (str == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			str[c] = av[a][b];
			c++;
		}
		if (str[c] == '\0')
		{
			str[c++] = '\n';
		}
	}
	return (str);
}
