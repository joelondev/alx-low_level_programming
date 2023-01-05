#include "main.h"

/**
 * is_prime_number - function that returns 1 if the input integer is a prime
 *  number, otherwise return 0
 * @n: number to determine
 * Return: 1 for prime number and 0 .
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n < 4)
		return (1);
	return (help_func_2(n, 2));
}

/**
 * help_func_2 - helper function, recursive steps
 * @n: number
 * @d: divisor
 * Return: 1 for prime
 */

int help_func_2(int n, int d)
{
	if (n % d == 0)
		return (0);
	else
		return (help_func_2(n, d + 1));
}
