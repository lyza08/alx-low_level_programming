#include "main.h"

/**
  * print_most_numbers - Entry point
  * Description - 'printing 0 to 9 with the exception of 2 and 4'
  * Return: Always 0 (successful)
  */

void print_most_numbers(void)
{
	int y = 0;

	for (y = 0; y <= 9; y++)
	{
		if (y == 2 || y == 4)
		{
			continue;
		}
		else
		{
			_putchar(y + '0');
		}
	}
	_putchar('\n');
}
