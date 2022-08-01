#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - 0
 * @a: 0
 * @size: 0
 */
void print_diagsums(int *a, int size)
{
	int i, x, y;

	x = 0;
	y = 0;

	for (i = 0; i < size * size; i++)
	{
		if (i == (size * floor(i / size)) + floor(i / size))
		{
			x += a[i];
		}

		if (i == (int) (size * ceil((float) (i + 1)  / (float) size) - ceil((float) (i + 1)  / (float) size)))
		{
			y += a[i];
		}
	}

	printf("%d, %d\n", x, y);
}
