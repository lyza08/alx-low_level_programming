#include <stdio.h>

/**
  * _puts_recursion - Entry point
  * Description - function that prints a string
  * @s: the char string type
  * Return: void (sucessful)
  */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	putchar('\n');
	return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
