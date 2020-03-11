#include <stdio.h>
#include "function_pointers.h"
/**
 * void print_name - print name
 * @name: name of the person
 * @f: function pointer to which one
 * Return: Nothing.
 */
 void print_name(char *name, void (*f)(char *))
 {
	 if (f)
		 f(name);
 }
