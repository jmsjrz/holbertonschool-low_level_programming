#include "main.h"

/**
* _square_root - Recursive function to find the square root
* Description: test integrer starting from 0 to be squared
* @n: number that we need to find the square root.
* @x: variable tested as the square root of `n`.
* Return: The natural square root of `n` if it exists, or -1 (error)
*/
int _square_root(int n, int x)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (x);

	return (_square_root(n, x + 1));
}

/**
* _sqrt_recursion - Calculates the natural square root of a number
* @n: number for which to find the square root
* Return: The natural square root of `n`, or -1 (error)
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	return (_square_root(n, 0)); /* recursive search with x initialized to 0 */
}
