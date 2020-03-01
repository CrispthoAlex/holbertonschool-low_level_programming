#include "holberton.h"
#include <stdio.h>

/**
 * main - return program name argv[0] = **argv
 * @argv: The character to print
 * @argc: size array
 * Return: On success 1 else 0
 *
 */
int main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n", *argv); /* print program name, ever return position 0*/

return (0);

}
