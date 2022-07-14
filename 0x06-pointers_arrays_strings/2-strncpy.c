#include "main.h"

/**
 * _strncpy - check the code
 * @dest: dest
 * @src: src
 * @n: n
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *str;

	str = strncpy(dest, src, n);
	dest = str;

	return (str);
}

