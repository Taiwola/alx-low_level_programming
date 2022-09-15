#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of times the line will be drawn
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 0, i < n, i++)
		{
			int j;

			for (j = 0, j < n, j++)
			{
				if (i == j)
				_putchar('\\');
			else
				_putchar(' ');
		}
	}
}
