#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 * Return: 1 when successful and -1 for error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
