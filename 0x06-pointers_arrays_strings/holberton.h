#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
int _putchar(char c);
/* will include _putchar */
char *_strcpy(char *dest, char *src); /* project 0x05 - 9 - copy string  */
char *_strcat(char *dest, char *src); /* 0 - concatenates string */
char *_strncat(char *dest, char *src, int n);/*1-concatenates string with n*/
char *_strncpy(char *dest, char *src, int n); /*2- copy string from n */
int _strcmp(char *s1, char *s2); /* 3- compares string */
void reverse_array(int *a, int n); /*reverses contents of an array of integers*/
#endif /* HOLBERTON_H */
