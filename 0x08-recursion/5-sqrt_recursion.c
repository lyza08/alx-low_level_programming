#include "main.h"

/**
  * help - Finds the natural sqaure root
  * @n: number to find the natural sqaure root
  * @x: root to be tested
  * Return: If the number has a sqaure root - The sqaure root
  *         If the number does not - -1 (successful)
  */

int help(int n, int x)
{
	if ((x * x) == n)
		return (x);

	if (x == n / 2)
		return (-1);

	return (help(n, x + 1));
}

/**
  * _sqrt_recursion - Entry point
  * Description - func that returns the natural square root of a number
  * @n : the number to find natural sqaure root of
  * Return: If number has sqaure root - The sqaure root
  *         If number does not - -1 (sucess)
  */

int _sqrt_recursion(int n)
{
	int x = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (help(n, x));
}
