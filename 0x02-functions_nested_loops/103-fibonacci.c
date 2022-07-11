#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long sum, a, b, c;

	sum = 0;
	a = 0;
	b = 1;

	while (1)
	{
		c = a + b;

		if (c > 4000000)
		{
			printf("%ld", sum);
			break;
		}

		a = b;
		b = c;

		if (c % 2 == 0)
			sum += c;
	}
	printf("\n");
	return (0);
}

