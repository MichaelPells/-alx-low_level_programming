#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - ?
 * @x: ?
 * @y: ?
 * 
 * Return: ?
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	/* I could have used the pow() function */
	/* But I chose not to */
	/* I dared recursion instead */

	if (y == 0)
		return (1);
	if (y == 1)
		return (x);

	return (x * _pow_recursion(x, --y));
}
