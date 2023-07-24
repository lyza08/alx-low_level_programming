#include "main.h"

/**
  * _strspn - Entry point
  * Description - 'a function that gets the length of a prefix substring'
  * @s: string to be used
  * @accept: string length to be found
  * Return: the number of bytes in the initial segment (successful)
  */

unsigned int _strspn(char *s, char *accept)
{
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				break;
			}
		}
		if (accept[y] == '\0')
		{
			break;
		}
	}
	return (x);
}
