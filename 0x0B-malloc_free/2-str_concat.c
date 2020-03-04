#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concats two strings to pointer
 *
 * @s1: string 1
 * @s2: string 2
 * Return: Nothing.
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	/*int j;*/
	int size1, size2, size3; /*_strlen() - length string str */
	char *strconcat;

	if (s1)/* if size > 0 str ok */
	{
		i = 0;
		while (s1[i] != '\0')
			i++;
	}
	size1 = i;

	if (s2)/* if size2 > 0 s2 ok */
	{
		i = 0;
		while (s2[i] != '\0')
			i++;
	}
	size2 = i + 1;/* size s2, include '\0' */

	strconcat = malloc((size1 + size2) * sizeof(char));/*size2include'\0'*/
	if (strconcat == NULL) /* if strconcat NULL*/
		return (NULL);
	for (i = 0; i < size1; i++)/* reinicialized i*/
		strconcat[i] = s1[i];
	for (i = 0; i < size2; i++)/* j init in size1 */
		strconcat[size1 + i] = s2[i];

	size3 = size1 + size2;
	strconcat[size3] = '\0';
	return (strconcat);
}
