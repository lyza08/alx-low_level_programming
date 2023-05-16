#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - Entry point
 * Description - function that returns  pointer to a newly allocated memory
 * @str : char string type
 * Return: pointer to char (Successful)
*/

char *_strdup(char *str)
{
	char *new_s;
	int length;
	int x;

	if (str == 0)
	{
		return (NULL);
	}

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	new_s = malloc(sizeof(char) * (length + 1));

	if (new_s == 0)
	{
		return (NULL);
	}

	for (x = 0; x < length; x++) /*loop copying details of str into new_s*/
	{
		new_s[x] = str[x];
	}

	new_s[x] = '\0';

	return (new_s);
}

