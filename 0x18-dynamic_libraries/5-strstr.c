#include "main.h"

/**
  * *_strstr - Entry point
  * Description - function that locates a substring
  * @haystack: string to be used
  * @needle: string to be located
  * Return: 0 (Successful)
  */

char *_strstr(char *haystack, char *needle)
{
	int x, y;

	for (x = 0; haystack[x]; x++)
	{
		for (y = 0; needle[y]; y++)
		{
			if (haystack[x + y] != needle[y])
			{
				break;
			}
		}
		if (!needle[y])
		{
			return (&haystack[x]);
		}
	}
	return (0);
}
