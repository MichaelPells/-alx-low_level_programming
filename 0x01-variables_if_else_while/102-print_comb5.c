#include <stdio.h>
#include <math.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, a, b, j, x, y;

	for (i = 0; i < 100; i++)
	{
		a = floor(i / 10);
		b = i % 10;

		for (j = 0; j < 100; j++)
		{
			x = floor(j / 10);
			y = j % 10;

			if (j > i)
			{
				if (!(i == 0 && j == 1))
				{
					putchar(',');
					putchar(' ');
				}
				putchar('0' + a);
				putchar('0' + b);
				putchar(' ');
				putchar('0' + x);
				putchar('0' + y);
			}
		}
	}
	putchar('\n');
	return (0);
}

