#include <string.h>
#include "main.h"

/**
 * _strcpy - copy string from src to dest
 * @dest: pointer to be returned
 * @src: pointer to be copied
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
