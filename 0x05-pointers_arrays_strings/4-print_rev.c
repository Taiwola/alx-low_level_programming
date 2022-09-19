#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints string in reversed order
 * @str: string
 * Return: void
 */

void print_rev(char *str)
{
	int i, len = strlen(str);

	for (i = len - 1; i >= 0; i--)
		putchar(str[i]);
	putchar('\n');
}
