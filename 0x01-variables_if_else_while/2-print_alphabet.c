#include <stdio.h>

/**
 * main - prints out the
 * lowercase alphabet
 * Return: returns the exit code
*/
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		printf("%c", i);
	}
	printf("\n");
	return (0);
}
