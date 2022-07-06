#include "main.h"


/**
 * main - This is a description
 *
 * Return: returns 0
 */
int main(void)
{
	char *text;
	unsigned int i;

	text = "_putchar";

	for (i = 0; i < strlen(text); i++)
	{
		_putchar(text[i]);
	}

	_putchar('\n');

	return (0);
}

