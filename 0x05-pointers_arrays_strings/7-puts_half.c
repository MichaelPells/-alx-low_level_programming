#include "main.h"

/**
 * puts_half - check the code
 * @str: str
 */
void puts_half(char *str)
{
	int half, n;

	half = strlen(str) - (strlen(str) / 2);

	for (n = half; n < (int) strlen(str); n++)
		_putchar(str[n]);
	_putchar('\n');
}

