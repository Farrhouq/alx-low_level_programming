#include <stdio.h>

/**
 * main - prints out the
 * lowercase alphabet, and then the uppercase alphabet
 * Return: returns the exit code
*/
int main(void)
{
	char i;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	for (i = 65; i < 91; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
