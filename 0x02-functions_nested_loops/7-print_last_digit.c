#include "main.h"

/**
 * print_last_digit - check the code
 * @n: n
 *
 * Return: val.
 */
int print_last_digit(int n)
{
	int x;

	x = abs(n % 10);

	_putchar('0' + x);
	return (x);
}

