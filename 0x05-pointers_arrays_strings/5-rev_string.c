#include <string.h>
#include "main.h"

/**
 * rev_string - reverse a string
 * @str: string
 * Return: void
 */

void rev_string(char *str)
{
	int i = strlen(str) - 1, j = 0;
	char rv;

	while (i > j)
	{
		rv = str[i	
