#include "main.h"

/**
 * print_diagonal - check the code
 * @n: n
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i ; j++)
			_putchar(' ');
		_putchar('\\');
		if (i < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}

