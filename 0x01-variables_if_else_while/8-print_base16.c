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

	i = 0;
	while (i < 16)
	{
		printf("%x", i);
		i++;
	}
	putchar('\n');

	return (0);
}
