#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @wi: width of the grid
 * @he: height of the grid
 * Return: 0 Always
 */
int **alloc_grid(int wi, int he)
{
	int i = 0;/* he */
	int j = 0;/* wi */
	int **biar;

	if (wi <= 0 || he <= 0)
		return (NULL);

	biar = malloc(he * sizeof(int *));/* reserve he (i) spaces */
	if (biar == NULL)
		return (NULL);
	for (i = 0; i < he; i++)
	{
		biar[i] = malloc(wi * sizeof(int));/* reserve wi (j) spaces*/
		if (biar[i] == NULL) /* check each j */
		{
			for  (i -= 1; i >= 0; i--)/*releasedmemowherefailme*/
				free(biar[i]);/* anoi tower */
			free(biar);/* released p in memory | anoi tower*/
			return (NULL);
		}

		for (j = 0; j < wi; j++) /* assignament 0 */
		{
			biar[i][j] = 0;
		}

	}
	return (biar);
}
