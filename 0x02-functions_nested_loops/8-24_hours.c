#include "main.h"

/**
  * jack_bauer -  Entry point
  * Description - prints every minute of Jack Bauer's day from 00:00 to 23:59
  * Return: void (successful)
  */

void jack_bauer(void)
{
	int x, y, z, i;

	for (x = 0; x <= 2; x++)
	{
	for (y = 0; y <= 9; y++)
	{
	if ((x <= 1 && x <= 9) || (x <= 2 && y <= 3))
	{
	for (z = 0; z <= 5; z++)
	{
	for (i = 0; i <= 9; i++)
	{
	_putchar(x + 48);
	_putchar(y + 48);
	_putchar(58);
	_putchar(z + 48);
	_putchar(i + 48);
	_putchar('\n');
	}
	}
	}
	}
	}
}
