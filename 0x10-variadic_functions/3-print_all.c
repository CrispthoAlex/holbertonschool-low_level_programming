#include <stdlib.h>
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
	char *printstr = va_arg(varargum, char *);/*pointer to string*/

	if (printstr == NULL)
	{
		printstr = "(nil)";
	}
	printf("%s", printstr);
}
/**
 * print_all - prints all types, anything
 * @format: types arguments
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
/*selects the correct function to print asked type*/
	va_list  varglist;/*list of type of arguments*/
	int i = 0, j;
	char *printsep = "";/*pointer to print separator*/

	tyarg_t optype[] = {/*optype */
		{"c", ty_char}, /* prints char*/
		{"i", ty_int}, /* prints integer*/
		{"f", ty_float},/* prints float*/
		{"s", ty_str},/* prints char * - string*/
		{NULL, NULL}
	};
	va_start(varglist, format);/*initialized list (format)*/

	while (format && format[i])
	{
		j = 0;
		while (optype[j].argformat != NULL)/*itera type arguments*/
		{
			if (format[i] == *(optype[j].argformat))
			{/*verifiedformat*/
				printf("%s", printsep);
				optype[j].f(varglist);
				printsep = ", ";
				break;
			}
			j++;/*increase function*/
		}
		i++;/*increase format/type*/
	}
	va_end(varglist); /*free varglist memory*/
	printf("\n");
}
