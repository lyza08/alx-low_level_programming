#include <stdio.h>
/**
  * main - print and compute the sum of
  * Description: multiples of 3 or 5 below 1024 (excluded).
  *
  * Return: Always 0 is success.
  */
int main(void)
{
	int x, sum = 0;

	for (x = 0; x < 1024; x++)
	{
		if ((x % 3) == 0 || (x % 5) == 0)
			sum += x;
	}

	printf("%d\n", sum);
	return (0);
}
