#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free grid
 *
 * @grid: grid
 * @height: height of the grid
 * Return: 0 Always
 */
void free_grid(int **grid, int height)
{
	int i = height; /* he */

	for  (; i >= 0; i--)/*releasedmemowherefailme*/
		free(grid[i]);/* anoi tower */
	free(grid);/* released p in memory | anoi tower*/
}
