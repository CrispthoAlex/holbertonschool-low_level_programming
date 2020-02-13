#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 1; i <= 100; i++)
	{
		j = i % 3; /* multiplos de 3*/
		k = i % 5; /* multiplos de 5*/
		if (i != 1)
			putchar(' ');
		if ((j == 0) && (k == 0)) /* print 3X or 5X */
		{
			printf("FIZZBUZZ");
		}
		else if (j == 0)
		{
			printf("FIZZ");
		}
		else if (k == 0)
		{
			printf("BUZZ");
		}
		else
			printf("%d", i);
	}
	putchar ('\n');
return (0);
}
