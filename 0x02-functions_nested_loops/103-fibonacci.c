#include <stdio.h>

/**
  * main - find and print the sum of the even-valued terms
  * Description: followed by a new line.
  *
  * Return: always 0 success
  */
int main(void)
{
	int x;
	unsigned long int a, b, next, sum;

	a = 1;
	b = 2;
	sum = 0;

	for (x = 1; x <= 33; x++)
	{
		if (a < 4000000 && (a % 2) == 0)
		{
			sum = sum + a;
		}
		next = a + b;
		a = b;
		b = next;
	}
	printf("%lu\n", sum);
	return (0);
}
