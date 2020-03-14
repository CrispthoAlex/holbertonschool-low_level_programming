#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * ty_char - prints char
 * @varargum: argument
 * Return: Always 0.
 */
void ty_char(va_list varargum)
{
	printf("%c", va_arg(varargum, int));
}

/**
 * ty_int - prints integer
 * @varargum: argument
 * Return: Always 0.
 */
void ty_int(va_list varargum)
{
	printf("%d", va_arg(varargum, int));
}
/**
 * ty_float - prints float
 * @varargum: argument
 * Return: Always 0.
 */
void ty_float(va_list varargum)
{
	printf("%f", va_arg(varargum, double));
}
/**
 * ty_str - prints string/char*
 * @varargum: argument
 * Return: Always 0.
 */
void ty_str(va_list varargum)
{
	char *printstr = va_arg(varargum, char*);/*pointer to string*/

	if (!varargum)
		printstr = "(nil)";

	printf("%s", printstr);
}

void print_all(const char * const format, ...)
{
/*selects the correct function to print asked type*/
	tyarg_t optype[] = {/*optype */
		{"c", ty_char}, /* prints char*/
		{"i", ty_int}, /* prints integer*/
		{"f", ty_float},/* prints float*/
		{"s", ty_str},/* prints char * - string*/
		{NULL, NULL}
	};
	va_list  varglist;/*list of type of arguments*/
	unsigned int i = 0;
	unsigned int j;
	char *printsep = "";/*pointer to print separator*/

	va_start(varglist, format);/*initialized list (format)*/

	while (format && format[i])
	{
		j = 0;
		while (optype[j].argformat)/*verifiedintrotype*/
		{
			if (optype[j].argformat[0] == format[i])
			{/*verifiedformat*/
				printf("%s", printsep);
				optype[j].f(varglist);
			}
			j++;/*increase function*/
		}
		printsep = ", ";
		i++;/*increase format/type*/
	}
	printf("\n");
	va_end(varglist); /*free varglist memory*/
}
