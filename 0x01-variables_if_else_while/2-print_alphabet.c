#include <stdio.h>

/**
 * main - Entry point
 * Description - 'print lowecase alphabets'
 * Return: always 0 (successful)
 */

int main(void)
{
	int x = 97;

	while (x <= 122)
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
