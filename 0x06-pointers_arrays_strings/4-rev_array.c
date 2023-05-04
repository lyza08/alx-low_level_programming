#include "main.h"

/**
  * reverse_array - Entry point
  * Description - Reversing elements of an array
  * @a: the array
  * @n: array elements
  * Return: void
  */

void reverse_array(int *a, int n)
{
	int y, tempo;

	for (y = 0; y < n--; y++)
	{
		tempo = a[y];
		a[y] = a[n];
		a[n] = tempo;
	}
}
