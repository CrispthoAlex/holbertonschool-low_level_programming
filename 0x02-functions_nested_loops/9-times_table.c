#include "holberton.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void) /*completar funcion */
{
	int i, j, m;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9 ; j++)
		{
			m = i * j; /* multiplicacion */

			if (j != 0)
			{
				if (m < 10)
				{
					_putchar(','); /* commas, espace */
					_putchar(' ');
					_putchar(' ');
					_putchar(m % 10 + '0');
				}
				if (m > 9)
				{
					_putchar(','); /* commas, espace */
					_putchar(' ');
					_putchar(m / 10 + '0'); /*first digit*/
					_putchar(m % 10 + '0'); /*second digit*/
				}
			} else
				_putchar(m % 10 + '0'); /* print digit*/
		} j = 0;
		_putchar('\n');
	}
}
