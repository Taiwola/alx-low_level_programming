#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int _strlen(const char *s);

/**
 * str_concat - concatenates two strings.
 * @s1: pointer
 * @s2: pointer
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	char *n;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	i = _strlen(s1);
	j = _strlen(s2);

	n = malloc((i + j) * sizeof(*s1) + 1);

	if (n == 0)
		return (NULL);
	strcat(n, s1);
	strcat(n, s2);
	return (n);
}

/**
 * _strlen - gets the length of a string
 * @s: the string
 * Return: string
 */

int _strlen(const char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
		;
	return (i);
}
