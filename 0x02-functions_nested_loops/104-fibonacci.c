#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the first 98 fibonacci numbers
 * Return: 0 always
*/
int main(void)
{
	long int prev1, prev2, next;
	int i;

	prev1 = 1;
	prev2 = 2;

	printf("%ld, %ld, ", prev1, prev2);
	for (i = 0; i < 99; i++)
	{
		next = prev1 + prev2;
		prev1 = prev2;
		prev2 = next;
		printf("%ld", next);
		if (i != 98)
			printf(", ");
	}
	putchar('\n');
	return (0);
}
