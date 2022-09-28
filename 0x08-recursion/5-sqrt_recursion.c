#include <stdio.h>
#include "main.h"

/**
 * _sqrt - returns the square root
 * @n: int of the sum
 * @i: second integer
 * Return: n
 */

int _sqrt(int n, int i)
{
	if (n == 1)
		return (1);
	else if (i == n || n < 0)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: integer
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
