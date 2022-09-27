#include "main.h"
#include <stddef.h>

/**
 * _strchr - function that locates a character in a string.
 * @s: the string to be searched
 * @c: char
 * Return: the pointer or NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\n'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (NULL);
}
