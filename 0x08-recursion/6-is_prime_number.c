#include "main.h"

/**
 * is_prime_number - Function that returns if the number is a prime
 * @n: Number to evaluate if it is a prime number
 *
 * Return: 1 - Prime number | 0 - Not prime number.
 */
int is_prime_number(int n)
{
	return (get_prime(n, 2));
}

/**
 * get_prime - Get the square root recursively
 * @n: Number to evaluate if it is a prime number
 * @i: Iterator
 *
 * Return: 1 - Prime number | 0 - Not prime number.
 */
int get_prime(int k, int i)
{
	if (k < 2)
		return (0);
	else if (k % i == 0 && i != k)
		return (0);
	else if (i == k)
		return (1);

	return (get_prime(k, i + 1));
}
