#include "main.h"

/**
 * _isdigit - check the code
 * @c: character
 *
 * Return: 0 or 1.
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}

