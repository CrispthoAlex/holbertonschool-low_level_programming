#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @argnum: numbers of arguments total
 * Return: Always 0
 */
int sum_them_all(const unsigned int argnum, ...)
{
	va_list  varglist;/*list of arguments*/
	int sumnum = 0; /*operator acmumulative*/
	unsigned int i = 0;

	if (argnum == 0)
		return (0);

	va_start(varglist, argnum);
	for ( ; i < argnum; i++)
	{
		sumnum += va_arg(varglist, int);
	}
	/*va_end(varglist); free varglist memory*/
	return (sumnum);
}
