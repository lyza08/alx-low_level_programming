#include "main.h"

/**
  * factorial - Entry point
  * Description - func that returns the factorial of a given number
  * @n: the given number
  * Return: factorial of n (successful)
  */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
