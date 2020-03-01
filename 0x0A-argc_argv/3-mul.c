#include "holberton.h"
#include <stdio.h>
#include <stdlib.h> /* load function atoi */

/**
 * main - return multiple tow numbers
 * @argv: The character to print
 * @argc: size array / number of arguments
 * Return: On success 1 else 0
 *
 */
int main(int argc, char *argv[])
{
	int mul = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul); /* multiple two arguments */
	}

return (0);
}
