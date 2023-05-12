#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that multiplies two numbers followed by a new line
 * @argc: the number of arguments
 * @argv: the array of pointers to the arguments
 * Return: if the program does not receive two arguments - 1
 *if it returns arguments -0 (successful)
 */

int main(int argc, char *argv[])
{
	int x, y, results;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

		x = atoi(argv[1]);
		y = atoi(argv[2]);
		results = x * y;

		printf("%d\n", results);

		return (0);
}
