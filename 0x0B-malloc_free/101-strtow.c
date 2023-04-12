#include <stdlib.h>
#include "main.h"

/**
 * count_word - function that counts number of words a string
 * @s: string
 *
 * Return: number of words
 */

int count_word(char *s)
{
	int split = 0;
	int w = 0;
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{
		if (s[count] == ' ')
			split = 0;
		else if (split == 0)
		{
			split = 1;
			w++;
		}
	}
	return (w);
}
/**
 * **strtow - function that splits a string into words
 * @str: string
 *
 * Return: returns a pointer to an array of strings(words) otherwise, NULL
 */

char **strtow(char *str)
{
	char **grid, *copy;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	grid = (char **)malloc(sizeof(char *) * (words + 1));
			if (grid == NULL)
			return (NULL);

			for (i = 0; i <= len; i++)
			{
				if (str[i] == ' ' || str[i] == '\0')
				{
				if (c)
				{
					end = i;
					copy = (char *)malloc(sizeof(char) * (c + 1));
					if (copy == NULL)
						return (NULL);
					while (start < end)
						*copy++ = str[start++];
					*copy = '\0';
					grid[k] = copy - c;
					k++;
					c = 0;
				}
				}
				else if (c++ == 0)
				start = i;
			}
			grid[k] = NULL;
			return (grid);
}
