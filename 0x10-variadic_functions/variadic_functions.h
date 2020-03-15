#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: numbers of arguments total
 * Return: Always 0
 */
int sum_them_all(const unsigned int n, ...);

/**
 * print_numbers - returns the sum of all its parameters
 * @n: numbers of arguments total
 * @separator: symbol char separator
 * Return: Always 0
*/
void print_numbers(const char *separator, const unsigned int n, ...);
/**
 * print_strings - returns the sum of all its parameters
 * @n: numbers of arguments total
 * @separator: symbol char separator
 */
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * struct tyarg - Struct tyarg
 * @argformat: format of the arguments
 * @f: The function associated
 */
typedef struct tyarg
{
	char *argformat;/* format of the argument*/
	void (*f)(va_list list);
} tyarg_t;
/**
 * print_all - returns the sum of all its parameters
 *
 * @format: numbers of arguments total
 */
void print_all(const char * const format, ...);

#endif
