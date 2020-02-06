#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - print alphAbet
 * Return:0
 */
int main(void)
{
char az;
char AZ;
for (az = 'a'; az <= 'z'; az++)
putchar(az);
for (AZ = 'A'; AZ <= 'Z'; AZ++)
putchar(AZ);
putchar('\n');
return (0);
}
