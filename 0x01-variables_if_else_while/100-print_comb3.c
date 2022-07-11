#include <stdio.h>
#include <math.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, a, b;

	for (i = 1; i < 100; i++)
	{
		a = floor(i / 10);
		b = i % 10;

		if (b - a > 0)
		{
			if (i > 1)
			{
				putchar(',');
				putchar(' ');
			}
			putchar('0' + a);
			putchar('0' + b);
		}
	}
	return (0);
}

