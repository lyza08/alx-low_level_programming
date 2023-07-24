#include "main.h"

/**
 * _isalpha - Entry point
 * Description - checking for uppercase
 * Return: 1 for uppercase, 0 otherwise  (successful)
 * @c: character to be checked
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
