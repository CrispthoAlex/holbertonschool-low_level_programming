#include "holberton.h"

/**
 * main - print holberton
 * Return:0
 */

int main(void)
{
char ho[9] = "Holberton";
int i;

for (i = 0; i <= 8; i++) /* condition */
{
	_putchar(ho[i]); /* print the string */
}
_putchar('\n');
return (0);
}
