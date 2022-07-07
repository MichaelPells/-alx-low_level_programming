#include "main.h"

/**
 * times_table - This is a description
 */
void times_table(void)
{
	int i;
	int j;
	int y;
	int a;
	int b;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			y = i * j;
			a = floor(y / 10);

			if (a == 0 && j > 0)
				_putchar(' ');
			else if (j > 0)
				_putchar('0' + a);

			b = y % 10;
			_putchar('0' + b);

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

