#include "main.h"

/**
  * *_memset - Entry point
  * Description - function that fills memory with a constant byte
  * @s: memory area pointed to by s
  * @b: constant byte
  * @n: maximum number of bytes
  * Return: pointer to the memory (successful)
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
