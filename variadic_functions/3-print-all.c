#include "variadic_functions.h"

/**
* print_all - Prints anything, according to a format.
* @format: A string containing the formats to print.
* Description: This function will iterate over each character of the format
* string and print the next argument of the specified type.
* Types are:
* c - char,
* i - integer,
* f - float,
* s - char* (string), prints (nil) if the string is NULL.
* Each argument printed is separated by a comma and a space, except the last.
*/
void print_all(const char * const format, ...)
{
	va_list args; /* Initialize a variable for the argument list */
	int i = 0; /* Counter for the format string */

	char *str; /* Pointer for string arguments */

	va_start(args, format); /* Start iterating over the argument list */

	/* Loop through the format string until we reach its end */
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i]) /* Switch on the current format character */
		{
			case 'c': /* In case of a char */
				printf("%c", va_arg(args, int)); /* Print the char */
				break;
			case 'i': /* In case of an integer */
				printf("%i", va_arg(args, int)); /* Print the integer */
				break;
			case 'f': /* In case of a float */
				printf("%f", va_arg(args, double)); /* Print the float */
				break;
			case 's': /* In case of a string (char *) */
				str = va_arg(args, char *);
				if (str == NULL) /* If the string is NULL */
				{
					printf("(nil)"); /* Print (nil) */
					break;
				}
				printf("%s", str); /* Otherwise, print the string */
				break;
		}
		/* If the current format character is valid and not the last one */
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
		format[i] == 's') && format[i + 1] != '\0')
			printf(", "); /* Print a separator */
		i++; /* Move to the next format character */
	}
	printf("\n"); /* After all arguments have been printed, print a newline */
	va_end(args); /* Clean up the argument list */
}
