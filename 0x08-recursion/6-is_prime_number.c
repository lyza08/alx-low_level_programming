#include "main.h"

/**
  * is_prime_number - Entry point
  * Description - function that prints prime numbers
  * @n: number to be checked
  * Return: 1 if the input integer, otherwise return 0 (successful)
  */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	if ((n % 2 == 0) || (n % 3 == 0) || (n % 5 == 0))
		return (0);
	else if (n % 9 == 0 || n % 7 == 0)
		return (0);
	else
		return (1);
}
