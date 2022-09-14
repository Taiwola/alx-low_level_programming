#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @b: integer
 * Return: 0
 */
int print_last_digit(int b)
{
	int i;

	i = b % 10;
	if (i < 0)
	{
		_putchar(-i + 48);
		return (-i);
	}
	else
	{
		_putchar(i + 48);
		return (i);
	}
}
