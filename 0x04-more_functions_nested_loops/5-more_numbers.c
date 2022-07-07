#include "main.h"

/**
 * more_numbers - This is a description
 */
void more_numbers(void)
{
	int n;
	int i;

	for (n = 1; n <= 10; n++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar('0' + floor(i / 10));
			_putchar('0' + (i % 10));
		}
		_putchar('\n');
	}
}

