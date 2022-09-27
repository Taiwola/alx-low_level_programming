#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: buffer to be filled
 * @b: char that will fill the buffer
 * @n: number of bytes to fill the memory array
 * Return: pointer to the memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
