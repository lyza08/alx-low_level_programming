#include <stdio.h>

/**
 * main - function that prints the number arguments
 * @argc: argument count
 * @argv: argument array
 * Return: Always 0 (successful)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
