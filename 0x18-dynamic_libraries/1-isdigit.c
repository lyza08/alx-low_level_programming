#include "main.h"

/**
  * _isdigit - checking for digits from 0 - 9
  * @c: characters to check
  * Return: 0 or 1
  **/
int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
