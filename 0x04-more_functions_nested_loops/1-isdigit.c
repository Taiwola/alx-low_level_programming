#include "main.h"
#include <ctype.h>

/**
 * _isdigit - check the code
 * @c: this is an ASCII integer
 * Return: 0 if it is not a digit and 1 otherwise
 */

int _isdigit(int c)
{
	if (isdigit(c))
	return (1);

	return (0);
}
