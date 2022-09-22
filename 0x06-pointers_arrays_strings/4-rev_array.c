#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array to be reserved
 * @n: no. of element in the array
 * Result: void
 */

void reverse_array(int *a, int n)
{
	int i, j, rev;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		rev = a[i];
		a[i] = a[j];
		a[j--] = rev;
	}
}
