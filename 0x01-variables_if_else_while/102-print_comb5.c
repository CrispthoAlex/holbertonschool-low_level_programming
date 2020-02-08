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
int m;
int o; /* unidades, decenas, centenas */

for (i = 48; i <= 57; i++) /* First Loop*/
{
for (n = 48; n <= 57; n++) /* Second Loop*/
{
for (m = i; m <= 57; m++) /* Thirth Loop*/
{
for (o = n + 1 ; o <= 57; o++)
{
putchar(i);/* decenas  */
putchar(n);/* unidades  */
putchar(' ');
putchar(m);/* decenas */
putchar(o);/* unidades */
if ((i != 57) || (n != 56) || (m != 57) || (o != 57)) /* */
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
