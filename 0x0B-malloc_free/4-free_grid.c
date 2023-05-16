#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - Entry point
 * Description - function that frees the memory space of prev program
 * @grid : pointer to 2 dimensional array
 * @height : grid of height
 * Return: void (successful)
*/

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
