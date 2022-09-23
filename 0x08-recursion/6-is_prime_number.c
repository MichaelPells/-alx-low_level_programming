#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - ?
 * @n: ?
 * 
 * Return: ?
 */
int is_prime_number(int n)
{
	return (check_factors(n, 2));
}

/**
 * check_factors - ?
 * @n: ?
 * @f: ?
 * 
 * Return: ?
 */
int check_factors(int n, int f)
{
	if (n < 2)
		return (0);
	if (n == f)
		return (1);
	if (n % f == 0)
		return (0);

	return (check_factors(n, ++f));
}
