#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description - printing 10x alphabets in lower case
 * Return: void (successful)
 */

void print_alphabet_x10(void)
{
	int x;
	int y;

	for (y = 1; x <= 10; x++)
	{
		for  (y = 97; y <= 122; y++)
		{
		_putchar(y);
		}
		_putchar('\n');
	}
}
