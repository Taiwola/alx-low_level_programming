#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value of the array
 * @max: maximum value of the array
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int range, i = 0, *p;

	if (min > max)
		return (NULL);

	range = max - min;
	p = malloc((range + 1) * sizeof(*p));

	if (p == NULL)
		return (NULL);

	for (range = min; range <= max; range++)
		p[i++] = range;
	return (p);
}
