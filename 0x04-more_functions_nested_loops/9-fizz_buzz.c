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
			putchar(' '); /* print space before number or string*/
		if ((j == 0) && (k == 0)) /* print 3X & 5X */
		{
			printf("FizzBuzz");
		}
		else if (j == 0)
		{
			printf("Fizz"); /* print 3X */
		}
		else if (k == 0)
		{
			printf("Buzz"); /* print 5X */
		}
		else
			printf("%d", i); /* print not 3X or 5X */
		}
	putchar('\n');
return (0);
}
