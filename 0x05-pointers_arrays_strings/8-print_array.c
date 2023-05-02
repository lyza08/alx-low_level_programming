#include <stdio.h>

/**
  * print_array - Entry point
  * Description - printing elements of an array
  * @a: is the array
  * @n: number of elements
  * Return: void (successful)
  */

void print_array(int *a, int n)
{
	int x = 0;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);

		if (x != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
