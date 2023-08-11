#include <stdio.h>

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
	int next_k;
	int next_l;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			next_k = i;
			next_l = j + 1;
			if (j == 57)
			{
				next_k = i + 1;
				next_l = 48;
			}
			for (k = i; k < 58; k++)
			{
				for (l = j; l < 58; l++)
				{
				if (!(i == 48 && j == 48 && k == 48 && l == 48))
				{
				putchar(i);
				putchar(j);
				putchar(32);
				putchar(k);
				putchar(l);
					if (!(i == 57 && j == 56 && k == 57 && l == 57))
					{
						putchar(44);
						putchar(32);
					}
				}}}}
	}
	putchar(10);
	return (0);
}
