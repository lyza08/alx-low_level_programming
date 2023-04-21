#include <stdio.h>

/**
 * main - Entry point
 * Description -'print alphabets in lowercase except e and q'
 * Return: Always 0 (successful)
 */

int main(void)
{
	int t = 97;

	while (t <= 122)
	{
		if (t == 101 || t == 113)
		{
			t++;
			continue;
		}
		putchar(t);
		t++;
	}
	putchar('\n');
	return (0);
}
