#include "holberton.h"
#include <stdio.h>
#include <stdlib.h> /* load function atoi */
#include <ctype.h>

/**
 * _isdigit - if array is numeric
 * @string: pointer to array argv[i]
 * Return: On success 1 else 0
 *
 */
int _isdigit(char *string)
{
	int j;

	for (j = 0; string[j] != '\0'; j++)
	{
		if (isdigit(string[j]) == 0) /*each position is digit*/
			return (0);
	}
	return (1);
}

/**
 * main - return adds if arguments are numeric
 * @argv: The character to print
 * @argc: size array / number of arguments
 * Return: On success "add" else 0 (argument no number) or 1 (symbols)
 */

int main(int argc, char *argv[])
{
	int i;
	int add = 0;

	if (agrc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (_isdigit(argv[i])) /* is digit? */
			{
				add += atoi(argv[i]); /*sum position integer*/
			}
			else  /* contain symbols? */
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", add);
	}
	return (0);
}
