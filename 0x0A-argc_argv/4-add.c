#include "main.h"

/**
 * main - main
 * @argc: ?
 * @argv: ?
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum, num, n;
	char *d, *x;

	sum = 0;
	d = "0123456789";

	while (--argc)
	{
		x = argv[argc];
		num = atoi(x);

		n = 0;
		while (n < (int) strlen(x))
		{
			if (!strchr(d, x[n]))
			{
				printf("Error\n");
				return (1);
			}
			n++;
		}

		sum += num;
	}

	printf("%d\n", sum);

	return (0);
}
