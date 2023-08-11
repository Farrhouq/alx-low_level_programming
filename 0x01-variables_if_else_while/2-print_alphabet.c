#include <stdio.h>

/**
 * main - prints out the
 * lowercase alphabet
 * Return: returns the exit code
*/
int main(void)
{
	char i;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
