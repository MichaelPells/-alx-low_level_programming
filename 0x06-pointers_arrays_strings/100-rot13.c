#include "main.h"

/**
 * rot13 - check the code
 * @str: str
 * Return: return.
 */
char *rot13(char *str)
{
	int i, j;
	char *a, *b;

	a = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	b = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; i < (int) strlen(str); i++)
	{
		j = 0;
		while (str[i] != a[j] && j < 52)
		{
			j++;
		}
		if (j < 52)
			str[i] = b[j];
	}
	return (str);
}

