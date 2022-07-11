#include "main.h"

/**
 * print_times_table - This is a description
 * @n: n
 */
void print_times_table(int n)
{
	int i;
	int j;
	int y;
	int a;
	int b;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				y = i * j;
				a = floor(y / 10);

				if (a == 0 && j > 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (a <= 9 && j > 0)
				{
					_putchar(' ');
					_putchar('0' + a);
				}
				else if (j > 0)
				{
					_putchar('0' + floor(a / 10));
					_putchar('0' + (a % 10));
				}

				b = y % 10;
				_putchar('0' + b);

				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}

