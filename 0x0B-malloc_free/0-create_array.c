#include "main.h"
#include <stdlib.h>

/**
 * create_array  - Entry point
 * Description - function that creates chars array
 * @size: size of the array
 * @c: char type
 * Return: pointer to char (successful)
*/

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));

	if (array == 0)
	{
		return (NULL);
	}

	for (x = 0; x < size; x++)
	{
		array[x] = c;
	}

	array[x] = '\0';

	return (array);

}
