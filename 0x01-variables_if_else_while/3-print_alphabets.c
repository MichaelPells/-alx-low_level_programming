#include <stdlib.h>
#include <stdio.h>

/**
 * main - This is a description
 *
 * Return: returns 0
 */
int main(void)
{
	char n;
	int i;

	n = 'a';

	i = 0;
	while (i < 26)
	{
		putchar(n);
		n++;
		i++;
	}

	n = 'A';

	i = 0;
	while (i < 26)
	{
		putchar(n);
		n++;
		i++;
	}

	putchar('\n');

	return (0);
}
