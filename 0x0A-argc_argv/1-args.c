#include "holberton.h"
#include <stdio.h>

/**
 * main - return program name argv[0] = **argv
 * @argv: The character to print
 * @argc: size array / number of arguments
 * Return: On success 1 else 0
 *
 */
int main(int argc, char **argv)
{
	(void) argv;

	printf("%d\n", (argc - 1)); /* print size array / number of arguments */

return (0);

}
