#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int i, ch

	for (i = 0; i < 10; i++)
	{
		for (ch = o; ch < 15; ch++)
		{
			if (ch >= 10)
			{
				_putchar((ch / 10) + '0');
			}
			_putchar((ch % 10) + '0');
		}
		_putchar(10);
	}
}
