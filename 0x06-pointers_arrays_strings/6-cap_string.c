#include "main.h"

/**
  * *cap_string - Entry point
  * Description - Capitalizing all first words of a string
  * @s: string to be treated
  * Return: pointer to s (successful)
  */

char *cap_string(char *s)
{
	int x;

	x = 0;

	while (s[x] != '\0')
	{
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		if (s[x] == ' ' || s[x] == '\t' || s[x] == '\n'
		|| s[x] == ',' || s[x] == ';' || s[x] == '.'
		|| s[x] == '!' || s[x] == '?' || s[x] == '"'
		|| s[x] == '(' || s[x] == ')' || s[x] == '{'
		|| s[x] == '}')
		{
			if (s[x + 1] >= 97 && s[x + 1] <= 122)
			{
				s[x + 1] = s[x + 1] - 32;
			}
		}
		x++;
	}
	return (s);
}

