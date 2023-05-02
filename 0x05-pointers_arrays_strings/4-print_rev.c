#include "main.h"

/**
  * print_rev - Entry point
  * Description - printing a string in reverse'
  * @s: string to be reversed
  * Return: void (successful)
  */

void print_rev(char *s)
{
	int x = 0;

	while (s[x])
	{
		x++;
	}
	while (x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
