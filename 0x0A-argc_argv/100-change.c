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
	int cents, coins, rem;

	argc--;

	if (argc != 1)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	coins = 0;

	if (cents >= 0)
	{
		rem = cents;
		coins += floor(rem / 25);
		rem = cents % 25;
		coins += floor(rem / 10);
		rem = cents % 10;
		coins += floor(rem / 5);
		rem = cents % 5;
		coins += floor(rem / 2);
		rem = cents % 2;
		coins += rem;
	}

	printf("%d\n", coins);

	return (0);
}
