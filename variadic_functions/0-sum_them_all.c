#include "variadic_functions.h"

/**
* sum_them_all - calculates the sum of all its parameters
* @n: number of parameters
*
* Description: This function computes the sum of all its parameters.
* The function takes an unsigned int n which represents the number
* of parameters (excluding n itself). It then uses stdarg.h to
* handle the variable number of parameters. If n is 0, it returns 0,
* indicating that there are no numbers to sum.
*
* Return: The sum of all parameters. Returns 0 if n is 0.
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers; /* list for variable number of arguments */
	unsigned int i;  /* loop counter */

	int sum = 0;     /* accumulator for sum of arguments */

	/* return 0 immediately if there are no arguments */
	if (n == 0)
	{
		return (0);
	}

	/* initialize va_list to iterate through arguments */
	va_start(numbers, n);

	/* iterate over each argument, adding its value to sum */
	for (i = 0; i < n; i++)
	{
		sum += va_arg(numbers, int); /* get next argument value and add to sum */
	}

	/* clean up va_list */
	va_end(numbers);

	return (sum);
}
