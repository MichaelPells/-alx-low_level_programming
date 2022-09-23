#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - check the code
 * @s: s
 */
void _print_rev_recursion(char *s)
{
	if (strlen(s) > 0)
	{
		char str[100];

		_putchar(s[strlen(s) - 1]);

		strcpy(str, s);
		str[strlen(s) - 1] = '\0';

		_print_rev_recursion(str);
	}
}
