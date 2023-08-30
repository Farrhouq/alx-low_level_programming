#include "main.h"

/**
 * palindrome_check - detects a palindrome
 * @s: string
 * @beg: first char of s
 * @end: last char of s
 *
 * Return: 1 if palindrome, 0 otherwise
 */

int palindrome_check(char *s, int beg, int end)
{
	if (beg > end)
		return (1);
	else if (s[beg] != s[end])
		return (0);

	return (palindrome_check(s, beg + 1, end - 1));
}


/**
 * _strlen_recursion - length of a string
 * @s: string
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}


/**
 * is_palindrome - palindrome checker
 * @s: word or string
 *
 * Return: 1 if palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int s_len = _strlen_recursion(s);

	if (s_len <= 1)
		return (1);

	return (palindrome_check(s, 0, s_len - 1));
}
