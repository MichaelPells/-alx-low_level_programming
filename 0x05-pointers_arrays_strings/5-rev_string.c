#include "main.h"

/**
 * rev_string - check the code
 * @s: s
 */
void rev_string(char *s)
{
	int n;
	char str[100];

	strcpy(str, s);

	for (n = (int) strlen(s) - 1; n > -1; n--)
	{
		s[n] = str[strlen(s) - n - 1];
	}
}

