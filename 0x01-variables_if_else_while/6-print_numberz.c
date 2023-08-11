#include <stdio.h>

/**
 * main - entry point
 * Description - prints all single digit numbers of
 * base 10 starting from 0, followed by a new line.
 * Return: always 0
*/
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
