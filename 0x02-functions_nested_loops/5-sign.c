#include "main.h"
/**
 * print_sign -  print the sign of a number
 * @n: the integer
 * Return: if n is greater than zero and return 1, is zero return 0 otherwise -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
