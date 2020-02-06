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
for (az = 'z' ; az >= 'a' ; az--) /* print z-a */
putchar(az);
putchar('\n');
return (0);
}
