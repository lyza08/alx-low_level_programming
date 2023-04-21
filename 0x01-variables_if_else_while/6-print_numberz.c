#include <stdio.h>

/**
 * main - Entry point
 * Description -'printing single digits with putchar'
 * Return: Always 0 (successful)
 */

int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(x + 48);
	}
	putchar('\n');
	return (0);
}
