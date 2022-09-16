#include <stdio.h>

/**
 * main - print the largest prime factor
 * Return: 0
 */

int main(void)
{
	long int n, i;

	n = 612852475143;
	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			n /= i;
			i--;
		}
	}
	printf("%1d \n", i);
	return (0);
}
