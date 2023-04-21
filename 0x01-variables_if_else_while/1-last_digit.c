#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * Description - print last digits of numbers
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int n, lastg;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastg = n % 10;
	if (lastg > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastg);
	}
	else if (lastg == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastg);
	}
	else if (lastg < 6 && lastg != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastg);
	}

	return (0);
}
