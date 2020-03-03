#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
/* Content all functions of "tasks do it" */

/* 0x02*/
/** function _putchar */
int _putchar(char c);

void print_alphabet(void); /* task 01*/
void print_alphabet_x10(void); /* task 02*/
int _islower(int c); /* task 03 checks is lower */
int _isalpha(int c); /* task 04 isalpha  */
int print_sign(int n); /* task 05 sig of number */
int _abs(int i); /* task 06 absolute value of an integer */
int print_last_digit(int n); /* 07 - last digit */
void jack_bauer(void); /* task 8 every minute of the day of Jack Bauer  */
void times_table(void); /* task 9 prints the 9 times table, starting with 0 */
int add(int i, int j); /* task 10 adds two integers and returns the result */
void print_to_98(int n); /* task 11 prints all natural numbers from n to 98 */
void print_times_table(int n); /* task 12 print n times table */

/* 0x03 */
void positive_or_negative(int i);
int largest_number(int a, int b, int c);
void print_remaining_days(int month, int day, int year);
int convert_day(int month, int day);

/* 0x04 */
int _isupper(int c); /* 0 is supper  */
int _isdigit(int c); /* 1 is digit */
int mul(int a, int b); /* 2 multiplication  */
void print_numbers(void); /* 3 numbers speak, 0-9 */
void print_most_numbers(void); /* 4 more numbers, not 2 and 4 */
void more_numbers(void); /*5. Numbers universal language */
void print_line(int n); /*6 print line */
void print_diagonal(int n); /* 7. I feel like I am diagonally  */
void print_square(int s); /* 8. Square */
void print_triangle(int s); /* 10. Triangle */

/* 0x05 */
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
int _atoi(char *s); /* convert a string to an integer */

/* 0x06 */
char *_strcpy(char *dest, char *src); /* project 0x05 - 9 - copy string  */
char *_strcat(char *dest, char *src); /* 0 - concatenates string */
char *_strncat(char *dest, char *src, int n);/*1-concatenates string with n*/
char *_strncpy(char *dest, char *src, int n); /*2- copy string from n */
int _strcmp(char *s1, char *s2); /* 3- compares string */
void reverse_array(int *a, int n); /*4-reverses contents of array of integers*/
char *string_toupper(char *); /* lowercase to uppercase*/
char *leet(char *); /* encodes a string into 1337 */

/* 0x07 */
char *_memset(char *s, char b, unsigned int n);/*0fillmemorywithaconstantbyte*/
char *_memcpy(char *dest, char *src, unsigned int n);/*1-copies memory area*/
char *_strchr(char *s, char c);/*2-locates a character in a string*/
unsigned int _strspn(char *s, char *accept);/*3-getslengthofaprefixsubstring*/
char *_strpbrk(char *s, char *accept);/*4-searches astringforanyofasetofbytes*/
char *_strstr(char *haystack, char *needle);/*5-locates a substring */
void print_chessboard(char (*a)[8]); /* 6 prints the chessboard */
void print_diagsums(int *a, int size); /*7-sum of the two diagonalsof a */
/*square matrix of integers*/
void set_string(char **s, char *to);/*8-sets the valueof apointer toachar*/

/* 0x08 */
void _puts_recursion(char *s);/*0- prints a string, followed by a new line*/
void _print_rev_recursion(char *s);/* 1- prints a string in reverse*/
int _strlen_recursion(char *s);/*2- returns the length of a string*/
int factorial(int n);/*3- returns the factorial of a given number*/
int _pow_recursion(int x, int y);/*4-returnsthevalueofxraisedtothepowerofy*/
int _sqrt_recursion(int n);/*5- returns the natural square root of a number*/
int is_prime_number(int n);/*6- returns 1 iftheinputintegerisaprimenumber,*/
/*otherwise return 0*/
int is_palindrome(char *s);/*7-returns 1ifastringisapalindromeand 0ifnot*/

#endif /* HOLBERTON_H */
