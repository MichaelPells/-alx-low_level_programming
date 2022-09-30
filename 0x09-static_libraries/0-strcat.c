#include "main.h"

/**
 * _strcat - check the code
 * @dest: dest
 * @src: src
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	char *str;

	str = strcat(dest, src);
	dest = str;

	return (str);
}

