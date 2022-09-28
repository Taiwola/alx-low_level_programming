#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - print a string with a newline
 * @s: string to be printed
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(++s);
}
