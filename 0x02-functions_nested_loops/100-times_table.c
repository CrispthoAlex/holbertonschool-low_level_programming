#include "holberton.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: input to n times table
 * Return: n times
 */
void print_times_table(int n)
{
	int i, j;

if (n < 0 || n < 15)
{
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n ; j++)
		{
			if (j == 0)
				_putchar((i * j) % 10 + '0'); /* print digit*/
			if (j != 0)
			{
				if ((i * j) < 10)
				{
					_putchar(','); /* commas, espace */
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar((i * j) % 10 + '0');
				}
				else if ((i * j) < 100)
				{
					_putchar(','); /* commas, espace */
					_putchar(' ');
					_putchar(' ');
					_putchar((i * j) / 10 + '0');
					_putchar((i * j) % 10 + '0');
				} else
				{
					_putchar(','); /* commas, espace */
					_putchar(' ');
					_putchar(((i * j) / 100) + '0');
					_putchar(((i * j) / 10) % 10 + '0');
					_putchar(((i * j) % 10) + '0');
				}
			}
		} j = 0;
		_putchar('\n');
	}
}
}
