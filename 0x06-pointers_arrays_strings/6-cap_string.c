#include "main.h"

/**
 * cap_string - check the code
 * @str: str
 * Return: Always 0.
 */
char *cap_string(char *str)
{
	int i;
	char x;

	for (i = 0; i < (int) strlen(str); i++)
	{
		if (i > 0)
			x = str[i - 1];
		else
			x = '.';

		if (x == ' ' || x == '\t' || x == '\n' || x == ',' || x == ';'
		|| x == '.' || x == '!' || x == '?' || x == '"' || x == '('
		|| x == ')' || x == '{' || x == '}')
			str[i] = toupper(str[i]);
	}
	return (str);
}

