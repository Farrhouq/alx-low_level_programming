#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the first 4000000 even fibonacci numbers
 * Return: 0 always
*/
int main(void)
{
	long int prev1, prev2, next;
	int i;

	prev1 = 1;
	prev2 = 2;

	printf("%ld, %ld, ", prev1, prev2);
	for (i = 0; i < 4000000; i++)
	{
		next = prev1 + prev2;
		prev1 = prev2;
		prev2 = next;
		if (next % 2 == 0)
			printf("%ld", next);
		if (i != 47)
			printf(", ");
	}
	putchar('\n');
	return (0);
}
