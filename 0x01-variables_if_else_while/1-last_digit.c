#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
/**
 * main - This is a description
 *
 * Return: returns 0
 */
int main(void)
{
	int n;
	int l;
	char i[50];

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	l = n % 10;

	if (l > 5)
		strcpy(i, "greater than 5");
	else if (l == 0)
		strcpy(i, "0");
	else
		strcpy(i, "less than 6 and not 0");

	printf("Last digit of %d is %d and is %s\n", n, l, i);

	return (0);
}
