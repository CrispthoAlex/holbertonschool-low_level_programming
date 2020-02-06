#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - print random number and say positve, negative or zero
 * Return:0
 */
int main(void)
{
int n, udig;
srand(time(0));
n = rand() - RAND_MAX / 2;
udig = n % 10;
if (udig > 5)
printf("Last digit of %i is %i and is greater than 5\n", n, udig);
if (udig < 6 && udig != 0)
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, udig);
if (udig == 0)
printf("Last digit of %i is %i and is 0\n", n, udig);
return (0);
}
