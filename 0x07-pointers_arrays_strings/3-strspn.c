#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string to be searched
 * @accept: string to be accepted
 * Return: the number bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0, new_count = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				count++;
		}
		new_count++;
		if (count == 0 || count != new_count)
			break;
	}
	return (count);
}
