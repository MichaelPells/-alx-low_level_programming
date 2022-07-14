#include "main.h"

/**
 * reverse_array - check the code
 * @a: a
 * @n: n
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int i, j;
	int copy[1000];

	for (i = 0; i < n; i++)
	{
		copy[i] = a[i];
	}

	for (j = n; j > 0; j--)
	{
		a[j - 1] = copy[n - j];
	}
}

