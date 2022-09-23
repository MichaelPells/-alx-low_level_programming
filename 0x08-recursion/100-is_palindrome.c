#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - ?
 * @s: ?
 *
 * Return: ?
 */
int is_palindrome(char *s)
{
	return (compare(s, 1));
}

/**
 * check_factors - ?
 * @s: ?
 * @i: ?
 *
 * Return: ?
 */
int compare(char *s, int i)
{
	if (!strlen(s))
		return (1);
	if (s[i - 1] != s[strlen(s) - i])
		return (0);
	if ((strlen(s) - i) - (i - 1) <= 1)
		return (1);

	return (compare(s, ++i));
}
