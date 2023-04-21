#include <stdio.h>

/**
 * main - Entry point
 * Description -'printing all digits from base 16'
 * Return: Always 0 (successful)
 */

int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
		if (x == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
