#include "main.h"

/**
  * _puts_recursion - Entry point
  * Description - printing a string, followed by a new line
  * @s: the char string type
  * Return: void Successful
  */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
