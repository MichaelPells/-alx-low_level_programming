#include "main.h"

/**
 * puts2 - check the code
 * @str: str
 */
void puts2(char *str)
{
	int n;

	for (n = 0; n < (int) strlen(str); n++)
	{
		if (n % 2 == 0)
			_putchar(str[n]);
	}
	_putchar('\n');
}

