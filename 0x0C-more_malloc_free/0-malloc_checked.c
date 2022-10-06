#include "main.h"
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 * @a: integer to be allocated
 * Return: void
 */

void *malloc_checked(unsigned int a)
{
	void *p;

	p = malloc(a);
	if (p == NULL)
		exit(98);
	return (p);
}
