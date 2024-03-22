#include "variadic_functions.h"

/**
* print_strings - prints strings, followed by a new line.
* @separator: the string to be printed between the strings.
* @n: the number of strings passed to the function.
*
* Description: Prints each string followed by the separator, except
* after the last string. If a string is NULL, prints (nil) instead.
* Prints a newline at the end of the function.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings; /* list for variable number of arguments */
	const char *str; /* pointer to char for temporarily storing the strings. */
	unsigned int i; /* loop counter */

	/* initialize va_list to iterate through arguments */
	va_start(strings, n);

	/* Loop through each string in the variable arguments */
	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, const char *); /* Retrieve the next string from list */

		if (str)
			printf("%s", str); /* Print the string if it's not NULL */
		else
			printf("(nil)"); /* Print "(nil)" if the current string is NULL */

		if (i < n - 1 && separator) /* Check if the separator should be printed */
			printf("%s", separator);
	}

	/* Clean up the va_list */
	va_end(strings);

	printf("\n");
}
