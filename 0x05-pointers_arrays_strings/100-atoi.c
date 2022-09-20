#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: pointer to the string
 * Return: converted string
 */

int _atoi(char *s)
{
	unsigned int count = 0, size = 0, o = 0, n = 1, a = 1, i;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;

		if (*(s + count) == '-')
			n *= -1;

		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
				a *= 10;
			size++;
		}
		count++;
	}

	for (i = count - size; i < count; i++)
	{
		o = o + ((*(s + i) - 48) * a);
		a /= 10;
	}
	return (o * n);
}
