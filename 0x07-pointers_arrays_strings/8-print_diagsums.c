#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * print_diagsums - 0
 * @a: 0
 * @size: 0
 */
void print_diagsums(int *a, int size)
{
	int i, x, y;
	float c;

	x = 0;
	y = 0;

	for (i = 0; i < size * size; i++)
	{
		if (i == (size * floor(i / size)) + floor(i / size))
		{
			x += a[i];
		}

		c = (float) (i + 1);

		if (i == size * ceil(c  / (float) size) - ceil(c  / (float) size))
		{
			y += a[i];
		}
	}

	printf("%d, %d\n", x, y);
}
