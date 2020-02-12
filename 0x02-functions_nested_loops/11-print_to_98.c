#include <stdio.h>
/**
 * print_to_98 - natural number
 * @n: enter first number
 * Return: result
 */
void print_to_98(int n)
{
	int i = 98;

	if (n <= i)
	{
		for ( ; n <= i; n++)
		{
			printf("%d, ", n);

			if (n != i)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	else
	{
		for ( ; n >= i; n--)
		{
			printf("%d, ", n);

			if (n != i)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
}
