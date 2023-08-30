#include "main.h"

/**
 * prime_check - checks for a prime number
 * @n: number
 * @l: number check
 *
 * Return: 1 on success, 0 otherwise
 */

int prime_check(int n, int l)
{
	if (l >= n)
		return (1);
	else if (n % l == 0)
		return (0);

	return (prime_check(n, l + 1));
}


/**
 * is_prime_number - checks if a number is prime or not
 * @n: number
 *
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (prime_check(n, 2));
}
