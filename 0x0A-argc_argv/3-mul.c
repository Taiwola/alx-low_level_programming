#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: arguement
 * @argv: arguement
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i, mul;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);

	return (0);
}
