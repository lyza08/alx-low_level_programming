#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - Entry point
 * Description - function using malloc to concantenate strings
 * @s1: char string type
 * @s2: char string type
 * Return: pointer to allocated space (successful)
*/

char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, x, y;
	char *addlens;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (x = 0; s1[len1] != '\0'; x++)
	{
		len1++;
	}

	for (x = 0; s2[len2] != '\0'; x++)
	{
		len2++;
	}
	addlens = malloc((len1 + len2 + 1) * sizeof(char));

	if (addlens == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < len1; x++)
	{
		addlens[x] =  s1[x];
	}
	for (y = 0; y < len2; y++)
	{
		addlens[x + y] = s2[y];
	}
	return (addlens);
}
