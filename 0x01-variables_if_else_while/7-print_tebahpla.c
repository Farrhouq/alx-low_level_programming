#include <stdio.h>

/**
 * main - entry point
 * Description - prints the lowercase alphabet in
 * reverse
 * Return: always 0
*/
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
