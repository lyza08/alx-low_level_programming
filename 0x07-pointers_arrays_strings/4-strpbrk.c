#include "main.h"

/**
  * *_strpbrk - Entry point
  * Description - function that searches a string for any of a set of bytes
  * @s: string to be used
  * @accept: string to be treated within s
  * Return: 0 (successful)
  */

char *_strpbrk(char *s, char *accept)
{
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				return (&s[x]);
			}
		}
	}
	return (0);
}
