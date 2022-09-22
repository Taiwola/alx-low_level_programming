#include "main.h"

/**
 * _strcpy - copy a string
 * @dest: destination string
 * @src: source
 * @n: number of bytes to copy
 * Return: result
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
