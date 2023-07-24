#include "main.h"

/**
  * *_memcpy - Entry point
  * Description - function that copies memory
  * @dest: destination char string type
  * @src: original char string type
  * @n: maximum number of bytes
  * Return: dest (successful)
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
