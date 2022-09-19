#include <string.h>
#include "main.h"

/**
 * print_rev - prints string in reversed order
 * @str: string
 * Return: void
 */

void print_rev(char *str)
{
	i count =0;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}
	for (count--; count >= 0; count--)
		_putchar(s[count]);
	_putchar('\n');
}
