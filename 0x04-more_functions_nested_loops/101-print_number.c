#include "main.h"

/**
 * print_number - check the code
 * @n: n
 */
void print_number(int n)
{
	int d;
	int x;

	x = 1;
	while (1)
	{
		if (x)
			d = 1;
		while (x)
		{
			if (floor(abs(n / d)) > 9)
			{
				d *= 10;
			}
			else
			{
				x = 0;
				if ((n / d) < 0)
					_putchar('-');
				break;
			}
		}

		_putchar('0' + floor(abs(n / d)));

		n = n % d;
		if (n == 0 && d == 1)
			break;
		d /= 10;
	}
}

