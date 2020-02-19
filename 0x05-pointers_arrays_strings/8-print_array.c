#include "holberton.h"
#include <stdio.h>

/**
 * print_array - returns string
 * @a: array string
 * @n: n numbres to print
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != 0)
		{
			printf(", ");
		}
		if (a[i] != '\0')
		{
			printf("%i", a[i]);
		}
	}
	putchar('\n'); /*new line */
}
