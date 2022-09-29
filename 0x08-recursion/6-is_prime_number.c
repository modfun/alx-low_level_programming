#include "main.h"

int isprime(int n, int i);

/**
 * is_prime_number - is prime number ?
 * @n: a number
 *
 * Description: a function to find if a number is prime.
 * Return: 1 if number is prime otherwise 0
 */
int is_prime_number(int n)
{
	return (isprime(n, 2));
}

/**
 * isprime - is prime ?
 * @n: number
 * @i: divisor
 *
 * Return: 1 if true otherwise 0
 */
int isprime(int n, int i)
{
	if (n <= 2)
		return ((n == 2) ? 1 : 0);
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);

	return (isprime(n, i + 1));
}
