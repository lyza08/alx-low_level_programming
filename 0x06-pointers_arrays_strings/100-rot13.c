#include "main.h"
/**
 * rot13 - Entry point
 * Description - Encoding using rot13
 * @s: input string
 * Return: the pointer to dest.
 */

char *rot13(char *s)
{
	int a, b;

	char *x = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *i = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; x[b] != '\0'; b++)
		{
			if (s[a] == x[b])
			{
				s[a] = i[b];
				break;
			}
		}
	}

	return (s);
}
