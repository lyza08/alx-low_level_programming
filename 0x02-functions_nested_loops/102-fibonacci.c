#include <stdio.h>

/**
  * main - Printing the first 50 Fibronacci numbers,
  * description: starting with 1 and 2 followed by a new line.
  *
  * Return: Always 0 successful
  */
int main(void)
{
	int y;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (y = 0; y < 50; y++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (y == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
