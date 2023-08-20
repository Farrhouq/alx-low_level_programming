#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - prints the last digit of a randomly
 * generated integer and some information about it
 * Return: 0 if not error; any other integer otherwise
*/
int main(void)
{
	int n;
	int lsdgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d ", n, lsdgt);
	lsdgt = n % 10;
	if (lsdgt > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (lsdgt == 0)
	{
		printf("and is 0\n");
	}
	else if (lsdgt < 6)
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
