#include <stdio.h>

/**
 * main -  prime factor
 * Return: Always 0
 */

int main(void)
{
	long int i, m; /* i, number m, divisor */

	i = 612852475143;

	for (m = 2; m < i; m++)
	{
		while (i % m == 0)
		{
			i = i / m;
		}
	}
	printf("%ld", m);
	printf("\n");
	return (0);
}
