#include "main.h"

/**
 * leet - check the code
 * @str: str
 * Return: return.
 */
char *leet(char *str)
{
	int i, j;
	char *a, *b;

	a = "aeotl";
	b = "43071";

	for (i = 0; i < (int) strlen(str); i++)
	{
		if (tolower(str[i]) == 'a'
		|| tolower(str[i]) == 'e' || tolower(str[i]) == 'o'
		|| tolower(str[i]) == 't' || tolower(str[i]) == 'l')
		{
			j = 0;
			while (tolower(str[i]) != a[j])
			{
				j++;
			}
			str[i] = b[j];
		}

	}
	return (str);
}

