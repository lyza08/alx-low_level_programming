#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - Entry point
 * @width : gird width
 * @height : grid height
 * Return: pointer to 2 dimensional array
*/

int **alloc_grid(int width, int height)
{
	int **doublep;
	int a, b;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	doublep = malloc(height * sizeof(int *));

	if (doublep == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		doublep[a] = malloc(width * sizeof(int));

		if (doublep[a] == NULL)
		{
			for (b = 0; b < a; b++)
			{
				free(doublep[b]);
			}
			free(doublep);
			return (NULL);
		}
		for (b = 0; b < width; b++)
		{
			doublep[a][b] = 0;
		}
	}
	return (doublep);
}
