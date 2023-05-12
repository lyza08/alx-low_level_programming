#include <stdio.h>

/**
 * main - program that prints all arguments it receives
 * @argc: arguments to count
 * @argv: array to count
 * Return: Always 0 (successful)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);

	return (0);
}
