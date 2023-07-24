#include "main.h"

/**
  * _strcpy - Entry point
  * Description - function copying one pointer to another pointer
  * @src: char type string
  * @dest: char string type
  * Return: Pointer to dest (successful)
  */

char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
