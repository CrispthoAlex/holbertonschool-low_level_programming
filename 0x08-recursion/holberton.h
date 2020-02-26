#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
int _putchar(char c);
/* will include _putchar */
void _puts_recursion(char *s);/*0- prints a string, followed by a new line*/
void _print_rev_recursion(char *s);/* 1- prints a string in reverse*/
int _strlen_recursion(char *s);/*2- returns the length of a string*/
int factorial(int n);/*3- returns the factorial of a given number*/
int _pow_recursion(int x, int y);/*4- returns the value of x raised to the power of y*/
int _sqrt_recursion(int n);/*5- returns the natural square root of a number*/
int is_prime_number(int n);/*6- returns 1 if the input integer is a prime number, otherwise return 0*/
int is_palindrome(char *s);/*7- returns 1 if a string is a palindrome and 0 if not*/
#endif /* HOLBERTON_H */
