#include "main.h"

/**
 * leet - check the code
 * @str: str
 * Return: return.
 */
char *leet(char *str)
{
	int i, j;

	for (i = 0; i < (int) strlen(str); i++)
	{
		if (str[i] == 'a' || str[i] == 'A')
			str[i] = '4';
		if (str[i] == 'e' || str[i] == 'E')
			str[i] = '3';
		if (str[i] == 'o' || str[i] == 'O')
			str[i] = '0';
		if (str[i] == 't' || str[i] == 'T')
			str[i] = '7';
		if (str[i] == 'l' || str[i] == 'L')
			str[i] = '1';
	}
	for (j = 0; j < 2; j++)
	{
		if (j == 2)
			j--;
	}
	return (str);
}

