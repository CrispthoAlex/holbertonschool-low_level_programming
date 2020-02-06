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
for (az = 'a' ; az <= 'z' ; az++) /* less q or e*/
{
if ((az != 'q') && (az != 'e'))
putchar(az);
}
putchar('\n');
return (0);
}
