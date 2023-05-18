#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - Entry point
 * Description - function allocating memory using malloc
 * @nmemb: array of elements
 * @size: number of bytes of each element
 * Return: void (successful)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *storer;
	unsigned int x;
	/* If nmemb or size is 0, then _calloc returns NULL */

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	/**
	 *The _calloc function allocates memory for an array
	 * of nmemb elements of size bytes
	 */
	storer = malloc(nmemb * size);

	if (storer == 0)
	{
		return (NULL);
	}

	for (x = 0; x < (nmemb * size); x++)
	{
		storer[x] = 0;
	}
	return (storer);
}
