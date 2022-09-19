#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @n: first integer
 * @i: second integer
 * Return: void
 */

void swap_int(int *n, int *i)
{
	int swp = *n;
	*n = *i;
	*i = swp;
}
