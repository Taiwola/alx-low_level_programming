#include <stdio.h>
#include <stdlib.h>

/**
 * main - add positive number
 * @argc: agruement
 * @argv: agruement
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i, n, sum = 0;
	char *error;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; argv[i]; i++)
	{
		n = strtol(argv[i], &error, 10);

		if (*error)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += n;
		}
	}
	printf("%d\n", sum);
	return (0);
}
