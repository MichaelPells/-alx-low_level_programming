#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - ?
 * @n: ?
 * 
 * Return: ?
 */
int _sqrt_recursion(int n)
{
	return (find_sqrt(n, 0, 305));
}


/**
 * find_sqrt - ?
 * @n: ?
 * @start: ?
 * @limit: ?
 * 
 * Return: ?
 */
int find_sqrt(int n, int start, int limit)
{
	/* I could have used the sqrt() function */
	/* But I chose not to */
	/* I dared recursion instead */

	int sqrt;

	sqrt = _sqrt(n, start, start, limit);

	if (sqrt == -2)
		sqrt = find_sqrt(n, start + limit, limit - 1);

	return (sqrt);
}


/**
 * _sqrt - ?
 * @n: ?
 * @start: ?
 * @f: ?
 * @limit: ?
 * 
 * Return: ?
 */
int _sqrt(int n, int start, int f, int limit)
{
	if (f - start > limit - 1)
		return (-2);

	if ((long int) f * f == (long int) n)
		return (f);
	if ((long int) f * f > (long int) n)
		return (-1);
	
	return (_sqrt(n, start, ++f, limit));
}
