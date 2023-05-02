#include "main.h"

/**
  * rev_string - Entry point
  * Description - printing a string in halves reverse
  * @s: string to be reversed
  * Return: void
  */

void rev_string(char *s)
{
	int length, x, half;
	char tmp;

	for (length = 0; s[length] != '\0'; length++)
		;
		x = 0;
		half = length / 2;

	while (half--)
	{
		tmp = s[length - x - 1];
		s[length - x - 1] = s[x];
		s[x] = tmp;
		x++;
	}
}
