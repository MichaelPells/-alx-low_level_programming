#include "main.h"

/**
 * jack_bauer - This is a description
 */
void jack_bauer(void)
{
	int h;
	int m;
	int a;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			if (h < 10)
				a = 0;
			else
				a = floor(h / 10);
			_putchar('0' + a);
			_putchar('0' + (h % 10));

			_putchar(':');

			if (m < 10)
				a = 0;
			else
				a = floor(m / 10);
			_putchar('0' + a);
			_putchar('0' + (m % 10));
			_putchar('\n');
		}
	}
}

