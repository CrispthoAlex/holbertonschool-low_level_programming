#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - for performs simple operations
 * @argc: count the arguments
 * @argv: each argument in position i
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int n1;
	int n2;

	if (argc != 4)/* only takes argv[1] && argv[3] */
	{
		printf("Error");
		return (98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	printf("%d\n", get_op_func(argv[2])(n1, n2));
	return (0);
}
