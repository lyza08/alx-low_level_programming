#include "main.h"

/**
 * print_sign - Entry point
 * Description - printing sign of a number
 * Return: 1 and print 0 if n is 0,return 0 if n is 0, otherwise return -1
 * @n: sign to check
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
