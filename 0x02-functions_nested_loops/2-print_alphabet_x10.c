#include "main.h"
/**
 * print_alphabet_x10 -  prints 10 times the alphabet
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i, b;

	for (i = o; i <= 9; i++)
	{
		for (b = 97; b <= 122; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
