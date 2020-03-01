#include "holberton.h"
#include <stdio.h>

/**
 * main - return arguments *argv++
 * @argv: The character to print
 * @argc: size array / number of arguments
 * Return: On success 1 else 0
 *
 */
int main(int argc, char **argv)
{
	while (argc--)
	printf("%s\n", *argv++); /* print arguments */

return (0);

}
