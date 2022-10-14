#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of agruments
 * Return: sum of its parameters
 */

int sum_them_all(const unsigned int n, ...)
{

	int sum = 0;
	unsigned int i;
	va_list v;

	if (n == 0)
		return (0);

	va_start(v, n);

	for (i = 0; i < n; i++)
		sum += va_arg(v, int);
	va_end(v);
	return (sum);
}
