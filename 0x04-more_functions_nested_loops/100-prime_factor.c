#include <stdio.h>
#include <string.h>
#include <math.h>
/**
 * main - prints the largest print number of 612852475143
 * 
 * 
 * Return: 0 for success and none 0 otherwise 
 */
int main(void)
{
	long int m;
	long int a;
	long int num;

	num = 612852475143;
	m = -1;

	while (num % 2 == 0)
	{
		m = 2;
		num /= 2;
	}

	for (a = 3; a <= sqrt(num); a = a + 2)
	{
		while (num % a == 0)
		{
			m = a;
			num = num / a;
		}
	}

	if (num > 2)
		m = num;

	printf("%ld\num", m);

	return (0);
}}
