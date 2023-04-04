#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @n: bytes of memory area
 * @src: memory area source
 * @dest: memory area destination
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j;
	int i = n;

	for (j = 0 ; j < i ; j++)
	{
		src[j] = dest[j];
		n--;
	}
	return (dest);
}
