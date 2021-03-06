#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
int _putchar(char c);
/* will include _putchar */
void reset_to_98(int *n); /* 0 - reset to 98  */
void swap_int(int *a, int *b); /* 1 - swaps the values of two integers */
int _strlen(char *s); /* 2 - returns the length of a string */
void _puts(char *str); /* 3 - prints a string, followed by a new line */
void print_rev(char *s); /* 4 - print reverse, followed new line */
void rev_string(char *s); /* 5 - reverses a string */
void puts2(char *str); /* 6 - prints every other character of a string  */
void puts_half(char *str); /* 7 - prints half of a string */
void print_array(int *a, int n); /* 8 - prints array  */
char *_strcpy(char *dest, char *src); /* 9 - copy string  */
#endif /* HOLBERTON_H */
