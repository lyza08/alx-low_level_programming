#include "main.h"

/**
  * *string_toupper - Entry point
  * Description - changing lowercased letters to uppercase
  * @str: string to be changed
  * Return: pointer to str
  */

char *string_toupper(char *str)
{
	int y = 0;

	while (str[y] != '\0')
	{
		if (str[y] >= 97 && str[y] <= 122)
		{
			str[y] = str[y] - 32;
		}
		y++;
	}
	return (str);
}
