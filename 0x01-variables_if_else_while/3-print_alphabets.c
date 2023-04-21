#include <stdio.h>

/**
 * main - Entry point
 * Description - 'print alphabets in uppercase and lowercase'
 * Return: always 0 (successful)
 */

int main(void)
{
	int n = 97;
	int l = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (l <= 90)
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
