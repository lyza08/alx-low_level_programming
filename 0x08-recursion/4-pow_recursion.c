#include "main.h"

/**
  * _pow_recursion - Entry point
  * Description - funct that returns the value of x to the power of y
  * @x: is the number
  * @y: power x is rasied to
  * Return: value of x raised to the power of y (successful)
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
