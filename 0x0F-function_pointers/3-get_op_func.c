#include "3-calc.h"

/**
* get_op_func - selects the correct function to operation asked
* @s: string operator
*
*
* Return: a integer for erro or result of operation
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (i < 5)/* function use by user */
	{
		if (*s == *ops[i].op && s[1] == 0)
		{
/* s[1]=0 no more operators like arguments*/
			return (*ops[i].f);
		}
		i++;
	}
	printf("Error\n");
	exit(99);
}
