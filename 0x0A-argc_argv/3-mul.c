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
    int a, b;

    argc--;

    if (argc != 2)
    {
        printf("Error\n");
    	return (1);
    }

    a = atoi(argv[1]);
    b = atoi(argv[2]);

    printf("%d\n", a * b);

	return (0);
}
