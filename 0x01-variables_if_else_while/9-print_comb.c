#include <stdio.h>

/**
 * main - entry point
 * Description - prints all possible combinations
 * of single-digit numbers
 * Return: always 0
*/
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
		putchar(44);
		putchar(32);
		}
	}
	putchar(10);
	return (0);
}
