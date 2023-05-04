#include "main.h"

/**
  * *leet - Entry point
  * Description - Encoding a string into 1337 using ascii table
  * @s: string to be used
  * Return: pointer to string
  */

char *leet(char *s)
{
	int x = 0, y;
	int lower[] = {97, 101, 111, 116, 108};
	int upper[] = {65, 69, 79, 84, 76};
	int num[] = {52, 51, 48, 55, 49};

	while (s[x] != '\0')
	{
		for (y = 0; y < 5; y++)
		{
			if (s[x] == lower[y] || s[x] == upper[y])
			{
				s[x] = num[y];
				break;
			}
		}
		x++;
	}
	return (s);
}
