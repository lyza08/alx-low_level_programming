#include "main.h"

/**
  * puts2 - Entry point
  * Description - 'printing only even numbers of a string'
  * @str: string to be used
  * Return: void (successful)
  */

void puts2(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
		}
		x++;
	}
	_putchar('\n');
}
