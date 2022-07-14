#include "main.h"

/**
 * string_toupper - check the code
 * @str: str
 * Return: Always 0.
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; i < (int) strlen(str); i++)
	{
		str[i] = toupper(str[i]);

	}
	return (str);
}

