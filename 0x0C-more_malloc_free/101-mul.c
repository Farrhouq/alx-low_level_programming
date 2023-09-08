#include "main.h"
#include <stdlib.h>
/**
 * _atoi - functuons same as the built in atoi
 * @s: input string
 * Return: 0 if the string has no int else
 * the digit is returned
 */
int _atoi(char *s)
{
	int result, len, diglen, found, sign, hasdigit;

	len = 0;
	sign = 1;
	result = 0;
	found = 0;
	while (*(s + len) != '\0')
	{
		if (*(s + len) >= '0' && *(s + len) <= '9')
		{
			if (*(s + len - 1) == '-')
			{
				sign = -1;
			}
			hasdigit = 1;
			diglen = 0;
			found = 1;
			while (*(s + diglen + len) >= '0' && *(s + diglen + len) <= '9')
			{
				if (!(result && 10))
					result += (*(s + len + diglen) - '0');
				else
					result = (result * 10) + (*(s + diglen + len) - '0');
				++diglen;
			}
			len += diglen;
		}
		if (found)
			break;
		++len;
	}
	if (!hasdigit)
	{
		return (0);
	}
	return (result * sign);
}

/**
 * is_digit - checks if the input string contains only digits
 * @s: input string
 * Return: 1 if all are digits otherwise 0
 */
int is_digit(char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		if (s[j] < '0' || s[j] > '9')
			return (0);
		j++;
	}
	return (1);
}

/**
 * exit_with_error - prints the test Error to the screen
 * Return: void
 */

void exit_with_error(void)
{
	int j = 0;
	char str[] = "Error";

	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
	exit(98);
}
/**
 * multiplyArgs - multiples two number arguments
 * multiplication algorithm
 * @arg1: first number
 * @arg2: second number
 * Return: void
 */
void multiplyArgs(char *arg1, char *arg2)
{
	int num1, num2, result, digit, dignum, j;
	char digarr[10];

	if (is_digit(arg1) && is_digit(arg2))
	{
		num1 =  _atoi(arg1);
		num2 = _atoi(arg2);
	}
	result = num1 * num2;
	dignum = 0;
	while (result > 0)
	{
		digit = result % 10;
		digarr[dignum] = digit + '0';
		dignum++;
		result /= 10;
	}
	for (j = dignum - 1; j >= 0; j--)
		_putchar(digarr[j]);
	_putchar('\n');
}

/**
 * main - entry point to program
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		exit_with_error();
	multiplyArgs(argv[1], argv[2]);
	return (0);
}
