#include <stdio.h>
#include <math.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, a, b, c;

	for (i = 1; i < 1000; i++)
	{
		a = floor(i / 100);
		b = ((int) floor(i / 10)) % 10;
		c = i % 10;

		if (a < b && b < c)
		{
			if (i > 12)
			{
				putchar(',');
				putchar(' ');
			}
			putchar('0' + a);
			putchar('0' + b);
			putchar('0' + c);
		}
	}
	putchar('\n');
	return (0);
}

