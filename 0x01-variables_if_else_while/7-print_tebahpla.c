#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 'Z', i > 'A', i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
