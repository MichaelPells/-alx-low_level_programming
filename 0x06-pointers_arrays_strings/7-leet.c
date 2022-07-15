#include "main.h"

/**
 * leet - check the code
 * @str: str
 * Return: return.
 */
char *leet(char *str)
{
	int i, j, x;
	char *a, *b;

	a = "aeotl";
	b = "43071";

	for (i = 0; i < (int) strlen(str); i++)
	{
		if (tolower(str[i]) == 'a'
		|| tolower(str[i]) == 'e' || tolower(str[i]) == 'o'
		|| tolower(str[i]) == 't' || tolower(str[i]) == 'l')
		{
			for (j = 0; j < (int) strlen(a); j++)
			{
				if (str[i] == a[j])
				{
					x = j;
					break;
				}
			}
			str[i] = b[x];
		}

	}
	return (str);
}

