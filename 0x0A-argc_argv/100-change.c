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
		rem = rem % 25;
		coins += floor(rem / 10);
		rem = rem % 10;
		coins += floor(rem / 5);
		rem = rem % 5;
		coins += floor(rem / 2);
		rem = rem % 2;
		coins += rem;
	}

	printf("%d\n", coins);

	return (0);
}
