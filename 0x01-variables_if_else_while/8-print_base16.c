#include <stdio.h>

/**
 * main - Entry point
 * Description -'printing all digits from base 16'
 * Return: Always 0 (successful)
 */

int main(void)
{
	int x;
	int y;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
	}
	for (y = 97; y <= 102; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
