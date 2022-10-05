#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: character
 * Return: return NULL if either size is zero or fails
 */

char *create_array(unsigned int size, char c)
{
	char *array_alloc = malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0 || array_alloc == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array_alloc[i] = c;
	}

	return (array_alloc);
}
