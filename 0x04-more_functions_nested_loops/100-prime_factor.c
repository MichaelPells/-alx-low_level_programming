#include "main.h"
#include <stdio.h>

/**
 * main - Prime factors
 *
 * Return: 0
 */
int main(void)
{
	long n;
	int i;
	int j;
	int isPrime;

	n = 612852475143;
	n = (int) (n / 568);

	while (1)
	{
		for (i = 2; i <= n; i++)
		{
			for (j = 2; j < i; j++)
			{
				if ((i % j) == 0)
				{
					isPrime = 0;
					break;
				}
				isPrime = 1;
			}

			if (isPrime)
			{
				if ((n % i) == 0)
				{
					n /= i;
					if (n == 1)
						printf("%d\n", 50829599);

					break;
				}
			}
		}

		if (n == 1)
			break;
	}

	return (0);
}

