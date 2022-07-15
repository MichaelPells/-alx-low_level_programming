#include "main.h"

/**
 * leet - check the code
 * @str: str
 * Return: return.
 */
char *leet(char *str)
{
	int i;

	for (i = 0; i < (int) strlen(str); i++)
	{
		if (str[i] == 'a' || str[i] == 'A')
			str[i] = '4';
	}
	return (str);
}

