B#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - print random number and say positve, negative or zero
 * Return:0
 */
int main(void)
{
int n, udigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
udigit = n % 10;
if (udigit > 5)
printf("Last digit of %i is $i and is greater than 5\n", n, udigit);
if (udigit < 6 && udigit != 0)
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, udigit);
if (udigit == 0)
printf("Last digit of %i is %i and is 0\n", n, udigit);
return (0);
}
