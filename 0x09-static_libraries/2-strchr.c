#include "main.h"

/**
  * *_strchr - Entry point
  * Description - function that locates a character in a string
  * @s: string to be used
  * @c: string within s to be located
  * Return: 0 (successful)
  */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
		{
			return (&s[x]);
		}
	}
	return (0);
}
