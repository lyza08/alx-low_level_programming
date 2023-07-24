#include "main.h"

/**
  * _puts - Entry point
  * Description - function printing a string
  * @str: string to be printed
  * Return: void (successful)
  */

void _puts(char *str)
{
	int x = 0;

	while (str[x])
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
