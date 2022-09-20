#include <string.h>
#include "main.h"

/**
 * puts_half - print the last half of the string
 * @s: pointer of variable s
 * Return: void
 */

void puts_half(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		i = i / 2;
	}
	else
	{
		i = (i + 1) / 2;
	}
	while (s[i] != '\0')
	{
		j = s[i];
		i++;
		_putchar(j);
	}
	_putchar('\n');
}
