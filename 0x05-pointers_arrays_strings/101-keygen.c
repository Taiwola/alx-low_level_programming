#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates keygen
 * Return: 0
 */

int main(void)
{
	int a, i, b, s;
	char w[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char p[58];

	srand(time(NULL));
	while (s != 2772)
	{
		a = b = s = 0;
		while ((2772 - 122) > s)
		{
			i = rand() % 62;
			p[a] = w[i];
			s += w[i];
			a++;
		}
		while (w[b])
		{
			if (w[b] == (2772 - s))
			{
				p[a] = w[b];
				s += w[b];
				a++
				break;
			}
			b++;
		}
	}
	p[a] = '\0';
	printf("%s", p);
	return (0);
}
