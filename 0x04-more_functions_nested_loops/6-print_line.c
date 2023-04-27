#include "main.h"

/**
  * print_line - print lines
  * @n: number of times
  * Return: void (successful)
  */

void print_line(int n)
{
	int y;

	for (y = 0; y < n; y++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
