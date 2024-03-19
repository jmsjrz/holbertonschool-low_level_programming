#include "3-calc.h"

/**
* op_add - Adds a and b.
* @a: First int.
* @b: Second int.
* Return: Sum.
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - Subtracts b from a.
* @a: First int.
* @b: Second int.
* Return: Difference.
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - Multiplies a and b.
* @a: First int.
* @b: Second int.
* Return: Product.
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - Divides a by b.
* @a: Dividend.
* @b: Divisor.
* Desc: Exits if b is 0.
* Return: Quotient.
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
* op_mod - Remainder of a/b.
* @a: Dividend.
* @b: Divisor.
* Desc: Exits if b is 0.
* Return: Remainder.
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
