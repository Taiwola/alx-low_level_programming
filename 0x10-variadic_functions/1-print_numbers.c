#include "variadic_functions.h"

/**
 * print_numbers - Prints a number followed by a newline
 * @separator: This is the string to be separated by numbers
 * @n: This is the number of integers
 * Return: Null void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list v;
	unsigned int i;

	va_start(v, n);
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(v, int));
		if (i < (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}
	va_end(v);
	putchar('\n');
}
