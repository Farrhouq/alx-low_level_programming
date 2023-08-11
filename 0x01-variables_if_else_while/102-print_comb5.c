#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description - prints all possible combinations
 * of two two-digit numbers
 * Return: always 0
 */
int main(void)
{
	int i;
	int j;
	int k;
	int l;
	int stop;

	stop = 0;
	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			if (stop)
				break;
			for (k = i; k < 58; k++)
			{
				for (l = j + 1; l < 58; l++)
				{
				if (!(i == 48 && j == 48 && k == 48 && l == 48))
				{
				if (i == 57 && j == 57 && k == 57 && l == 57)
				{
					stop = 1;
					break;
				}
				putchar(i);
				putchar(j);
				putchar(32);
				putchar(k);
				putchar(l);
				if (!(i == 57 && j == 56 && k == 57 && l == 57))
				{
					putchar(44);
					putchar(32);
				}}
				}}}
	}
	putchar(10);
	return (0);
}
