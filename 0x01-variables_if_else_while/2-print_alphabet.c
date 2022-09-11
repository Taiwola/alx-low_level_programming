#include <stdio.h>
/**
 * main - print lowercase alphabet
 *
 * Return: 0
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('/n');
	return (0);
}
