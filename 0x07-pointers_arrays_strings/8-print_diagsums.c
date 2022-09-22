#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * print_diagsums - 0
 * @a: a
 * @size: 0
 */
void print_diagsums(int *a, int size)
{
	int i, x, y, f;

	x = 0;
	y = 0;

	for (i = 0; i < size * size; i++)
	{
		f = floor(i / size);

		if (i == (size * f) + f)
		{
			x += a[i];
		}

		if (i == size * (f + 1) - (f + 1))
		{
			y += a[i];
		}
	}
	printf("%d, %d\n", x, y);
}
