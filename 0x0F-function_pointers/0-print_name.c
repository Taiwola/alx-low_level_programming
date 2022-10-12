#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - Prints a name
 * @name: name to be printed
 * @f: pointer to a func
 * Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
