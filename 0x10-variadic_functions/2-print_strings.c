#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @argnum: numbers of arguments total
 * @separator: symbol char separator
 *
 * Return: Always 0
 */
void print_strings(const char *separator, const unsigned int argnum, ...)
{
	va_list  varglist;/*list of arguments*/
	unsigned int i = 0;
	char *printstr;

	va_start(varglist, argnum);/*initialized list*/

	for ( ; i < argnum; i++)
	{
		printstr = va_arg(varglist, char*);/* pointer to*/

		if (i != 0 && separator)
			printf("%s", separator);/*not print first position*/
		if (!printstr)
			printf("(nil)");
		else
			printf("%s", printstr);
	}
	printf("\n");
	va_end(varglist); /*free varglist memory*/
}
