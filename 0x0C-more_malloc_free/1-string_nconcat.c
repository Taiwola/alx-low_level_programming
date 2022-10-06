#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @str1: pointer to the first string
 * @str2: pointer to the second string
 * @size: size of str2 to be concatenated
 * Return: the pointer
 */

char *string_nconcat(char *str1, char *str2, unsigned int size)
{
	unsigned int i, j;
	char *p;

	if (str1 == NULL)
		str1 = "";
	if (str2 == NULL)
		str2 = "";

	i = strlen(str1);
	j = strlen(str2) <= size ? strlen(str2) : size;
	p = malloc(i + j + 1);

	if (p == NULL)
		return (NULL);

	strcpy(p, str1);
	strncat(p, str2, size);

	return (p);
}
