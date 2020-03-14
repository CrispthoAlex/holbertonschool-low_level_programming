#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - returns the sum of all its parameters
 * @argnum: numbers of arguments total
 * @separator: symbol char separator
 *
 * Return: Always 0
 */
void print_numbers(const char *separator, const unsigned int argnum, ...)
{
	va_list  varglist;/*list of arguments*/
	unsigned int i = 0;

	va_start(varglist, argnum);

	for ( ; i < argnum; i++)
	{
		if (i != 0 && separator)
		{
			printf("%s", separator);/*not print first position*/
		}
		printf("%d", va_arg(varglist, int));
	}
	printf("\n");
	va_end(varglist); /*free varglist memory*/
}
