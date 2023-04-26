#include <stdio.h>

/**
  * main - Printing the first 98 fibonacci numbers without hardcode.
  *
  * Return: Always 0 success
  */
int main(void)
{
	unsigned long int x;
	unsigned long int fir = 1;
	unsigned long int sec = 2;
	unsigned long int l = 1000000000;
	unsigned long int fir1;
	unsigned long int fir2;
	unsigned long int sec1;
	unsigned long int sec2;

	printf("%lu", fir);

	for (x = 1; x < 91; x++)
	{
		printf(", %lu", fir);
		aft += fir;
		bef = sec - fir;
	}

	bef1 = (fir / l);
	bef2 = (fir % l);
	aft1 = (sec / l);
	aft2 = (sec % l);

	for (x = 92; x < 99; x++)
	{
		printf(", %lu", sec1 + (sec2 / l));
		printf("%lu", sec2 % l);
		sec1 = sec1 + fir1;
		fir1 = sec1 - fir1;
		sec2 = sec2 + fir2;
		fir2 = sec2 - fir2;
	}
	printf("\n");
	return (0);
}
