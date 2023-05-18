#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - Entry point
 * Description - function that concatenates two strings
 * @s1: char string type
 * @s2: char string type
 * @n: number of bytes
 * Return: pointer to allocated memory (successful)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, x;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}

	if (n >= len2)
	n = len2;
	ptr = (char *)malloc((len1 + n + 1) * sizeof(char));

	if (ptr == NULL)
	return (NULL);

	for (x = 0; x < len1; x++)
	{
		ptr[x] = s1[x];
	}
	for (; x < (len1 + n); x++)
	{
		ptr[x] = s2[x - len1];
	}
	ptr[x] = '\0';
return (ptr);
}
