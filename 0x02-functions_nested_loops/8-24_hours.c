#include "holberton.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i, j, n, m, o, p;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59 ; j++)
		{
			n = i / 10; /* first digit hour*/
			m = i % 10; /* second digit hour*/
			if ((i <= 23) || (m <= 3))
			{
				_putchar(n + '0');
				_putchar(m + '0');
				_putchar(':');
			}
			o = j / 10; /* first digit minute*/
			p = j % 10; /* second digit minute*/
			if ((j <= 5) || (m <= 9))
			{
				_putchar(o + '0');
				_putchar(p + '0');
				_putchar('\n');
			}
		}
	}
}
