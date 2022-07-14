#include "main.h"

/**
 * print_rev - check the code
 * @s: s
 */
void print_rev(char *s)
{
	int n;

	for (n = (int) strlen(s) - 1; n > -1; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}

