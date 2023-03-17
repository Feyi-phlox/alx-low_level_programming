#include <stdio.h>

/**
 * main - prints the size of various types of computer
 *
 * Return: 0 when sucessful
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)", sizeof(char));
        printf("Size of int: %lu byte(s)", sizeof(int));
        printf("Size of a long int: %lu byte(s)", sizeof(long int));
        printf("Size of a long double data: %lu byte(s)", sizeof(long double));
        printf("Size of a float: %lu byte(s)", sizeof(float));
        printf("Size of a double data: %lu byte(s)", sizeof(double));
	return (0);
}
