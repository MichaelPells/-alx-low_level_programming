#include "main.h"
#include <stdio.h>

/**
 * wildcmp - ?
 * @s1: ?
 * @s2: ?
 *
 * Return: ?
 */
int wildcmp(char *s1, char *s2)
{
	char x[100], y[100];
	char a, b;

	strcpy(x, s1);
	strcpy(y, s2);

	a = x[strlen(x) - 1];
	b = y[strlen(y) - 1];

	if (a != b && b != '*')
		return (0);

	x[strlen(x) - 1] = '\0';

	if (b != '*')
		y[strlen(y) - 1] = '\0';

	if (strlen(x))
		return (wildcmp(x, y));
	else
		return (1);
}
