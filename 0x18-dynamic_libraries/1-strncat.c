#include "main.h"

/**
 * _strncat - check the code
 * @dest: dest
 * @src: src
 * @n: n
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *str;

	str = strncat(dest, src, n);
	dest = str;

	return (str);
}

