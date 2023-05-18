#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - Entry point
 * Description - function that creates an array of integers
 * @min : elements in array
 * @max : number of bytes
 * Return: pointer to allocated memory (successful)
 */

int *array_range(int min, int max)
{
	int *ary, x = 0, y = min;

	if (min > max)
		return (0);

	ary = malloc((max - min + 1) * sizeof(int));

	if (ary == 0)
		return (NULL);

	while (x <= max - min)
		ary[x++] = y++;
return (ary);
}
