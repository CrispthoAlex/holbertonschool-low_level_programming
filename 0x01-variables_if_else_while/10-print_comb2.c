#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Combinations
 * Return:0
 */
int main(void)
{
int i;
int n;
for (i = 48; i <= 57; i++)
{
for (n = 48; n <= 57; n++)
{
putchar(i);
putchar(n);
if ((i < 57) || (n < 57))
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
