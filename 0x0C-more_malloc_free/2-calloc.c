#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: len of the array
 * @size: size of the array
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = calloc(nmemb, size);
	if (p == NULL)
		return (NULL);
	return (p);
}
