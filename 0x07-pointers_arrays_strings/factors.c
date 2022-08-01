#include <stdio.h>

void main()
{
	int a, b, num, i, n;

	a = 0;
	b = 100;

	for (num = a; num <= b; num++)
	{
		n = 0;

		for (i = 1; i <= num; i++)
		{
			if (num % i == 0)
			{
				n = n + 1;
			}
		}

		if (n == 2)
			printf("%d, ", num);
	}
}