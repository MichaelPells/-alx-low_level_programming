#include "main.h"

/**
 * _puts - check the code
 * @str: str
 */
void _puts(char *str)
{
	unsigned long n;

	for (n = 0; n < strlen(str); n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}

