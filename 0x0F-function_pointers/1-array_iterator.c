#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - function given as a parameter on each element of an array
 * @array: array of ints
 * @size: size of the array
 * @action: the pointer to the function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size <= 0 || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
