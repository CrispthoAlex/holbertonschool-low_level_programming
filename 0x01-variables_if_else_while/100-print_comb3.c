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
int n = 49;
int m = 0;
for (i = 48; i <= 57; i++)
{
for (; n <= 57; n++)
{
if (i != n)
{
putchar(i);
putchar(n);
if ((i < 56) || (n < 57))
{
putchar(',');
putchar(' ');
}
}
}
m++;
n = 49 +  m;
}
putchar('\n');
return (0);
}
