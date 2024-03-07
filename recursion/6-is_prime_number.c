#include "main.h"

/**
 * _inception - function wrapper for init d
 * @n: the number that be checked
 * @d: potential diviser
 * Return: 1 if primal, otherwise 0
 */
int _inception(int n, int d)
{
	if (d * d > n)
		return (1);
	if (n % d == 0)
		return (0);
	return (_inception(n, d + 1));
}

/**
 * is_prime_number - test if n is a prime number and manage specific cases
 * @n: the number that be checked
 * Return: 1 if primal, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n % 2 == 0)
		return (0);
	return (_inception(n, 2));
}
