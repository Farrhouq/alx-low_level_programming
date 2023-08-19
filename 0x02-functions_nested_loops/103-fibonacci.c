#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the first 4000000 even fibonacci numbers
 * Return: 0 always
*/
int main(void)
{
	long int prev1, prev2, next, total;
	int i;

	prev1 = 1;
	prev2 = 2;
	total = 0;

	for (i = 0; i <= 4000000; i++)
	{
		next = prev1 + prev2;
		prev1 = prev2;
		prev2 = next;
		if (next % 2 == 0)
			total += next;
	}
	printf("%ld\n", total);
	return (0);
}
