#include "main.h"

/**
  * _abs - Entry point
  * Description - 'printing absolute value of a number'
  * @x: The number to be computed
  * Return: absolute value of an integer
  */

int _abs(int x)
{
	if (x < 0)
	{
		return (x * -1);
	}
	else
	{
		return (x);
	}
}
