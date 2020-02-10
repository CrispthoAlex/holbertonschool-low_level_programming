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
int m; /* unidades, decenas, centenas */

for (i = 48; i <= 55; i++) /* First Loop*/
{
for (n = i + 1; n <= 56; n++) /* Second Loop*/
{
for (m = n + 1; m <= 57; m++) /* Thirth Loop*/
{
if ((m != n) && (n > i))
putchar(i);/* centenas  */
putchar(n);/* decenas  */
putchar(m);/* unidades */
if ((i < 55) || ((n < 56)  || (m < 57))) /* */
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
