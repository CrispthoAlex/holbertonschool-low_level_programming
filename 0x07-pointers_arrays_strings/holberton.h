#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
int _putchar(char c);
/* will include _putchar */
char *_memset(char *s, char b, unsigned int n);/*0fillsmemorywithaconstantbyte*/
char *_memcpy(char *dest, char *src, unsigned int n);/*1-copies memory area*/
char *_strchr(char *s, char c);/*2-locates a character in a string*/
unsigned int _strspn(char *s, char *accept);/*3-getslength of aprefixsubstring.*/
char *_strpbrk(char *s, char *accept);/*4-searches astringforanyof a setofbytes*/
char *_strstr(char *haystack, char *needle);/*5-locates a substring */
void print_chessboard(char (*a)[8]); /* 6 prints the chessboard */
void print_diagsums(int *a, int size); /*7-sum of the two diagonals of a
square matrix of integers*/
void set_string(char **s, char *to);/*8-sets the value of a pointer to a char */
#endif /* HOLBERTON_H */
