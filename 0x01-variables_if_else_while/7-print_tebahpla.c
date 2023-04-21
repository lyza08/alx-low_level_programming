#include <stdio.h>

/**
 * main - Entry point
 * Description -'print alphabets in reverse'
 * Return: Always 0 (successful)
 */

int main(void)
{
	int x = 122;

	while (x >= 97)
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
