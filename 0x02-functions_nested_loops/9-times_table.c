#include "main.h"

/**
  * times_table -  Entry point
  * Description - prints the 9 times table, starting with 0
  * Return: void (successful)
  */

void times_table(void)
{
	int x, y, c, d, e;

	for (x = 0; x <= 9; x++)
	{
	for (y = 0; y <= 9; y++)
	{
	c = x * y;
	if (c > 9)
	{
	d = c % 10;
	e = (c - d) / 10;
	_putchar(44);
	_putchar(32);
	_putchar(e + 48);
	_putchar(d + 48);
	}
	else
	{
	if (y != 0)
	{
	_putchar(44);
	_putchar(32);
	_putchar(32);
	}
	_putchar(c + 48);
	}
	}
	_putchar('\n');
	}
}
