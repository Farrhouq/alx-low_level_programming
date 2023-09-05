#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns the minimum number
 * of coins for change
 * @argc: the number of arguments
 * @argv: the amount
 * Return: 0 always
 */
int main(int argc, char **argv)
{
	int total, value, i;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	value = atoi(argv[1]);
	if (value < 0)
	{
		printf("0\n");
		return (0);
	}

	total = 0;
	for (i = 0; i < 5; i++)
	{
		if (value <= 0)
			break;
		total += value / coins[i];
		value = value % coins[i];
	}
	printf("%d\n", total);
	return (0);
}
