#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long i, a, b, c;

	a = 0;
	b = 1;

	for (i = 0; i < 50; i++)
	{
		c = a + b;

		a = b;
		b = c;
		if (i < 50 - 1)
			printf("%ld, ", c);
		else
			printf("%ld", c);
	}
	printf("\n");
	return (0);
}

