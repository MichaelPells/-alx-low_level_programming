#include <stdlib.h>
#include <stdio.h>

/**
 * main - This is a description
 *
 * Return: returns 0
 */
int main(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');

	return (0);
}
