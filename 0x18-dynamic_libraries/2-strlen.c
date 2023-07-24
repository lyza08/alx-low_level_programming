#include "main.h"

/**
  * _strlen - Entry point
  * Description - function printing the length of a string
  * @s: string to be measured
  * Return: length of s (successful)
  */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
