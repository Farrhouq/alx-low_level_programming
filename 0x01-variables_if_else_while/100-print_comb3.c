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
	int j;

	for (i = 48; i < 58; i++)
	{
		for (j = i + 1; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			if (!(i == 56 && j == 57))
			{
			putchar(44);
			putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
