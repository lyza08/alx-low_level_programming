#include "main.h"

/**
 * _islower - Entry point
 * Description - checking for lower case
 * Return: 1 for lowercase, 0 otherwise  (successful)
 * @c: character to be checked
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
