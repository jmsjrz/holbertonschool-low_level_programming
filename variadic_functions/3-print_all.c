#include "variadic_functions.h"

/**
 * print_all - Prints various types of data.
 * @format: String that represents the format of the incoming arguments.
 *
 * Description: This function takes a variable number of arguments and prints
 * them based on the format specified in the `format` string. The formats are:
 * - c: char
 * - i: integer
 * - f: float
 * - s: char* (prints (nil) if the string is NULL)
 * A new line is printed at the end of the function.
 */
void print_all(const char * const format, ...)
{
    va_list args; /* Variable to store the list of arguments */
    int i = 0, j; /* Counters for loops */
    char *separator = ""; /* Separator for printing */
    char *str; /* Temporary string for char* arguments */
    char formats[] = "cifs"; /* Valid format characters */

    va_start(args, format); /* Initialize the argument list */

    /* Iterate over format string until its end */
    while (format && format[i])
    {
        j = 0;
        /* Iterate over valid format characters */
        while (formats[j])
        {
            /* Check if current format character matches */
            if (format[i] == formats[j])
            {
                printf("%s", separator); /* Print separator if needed */
                /* Print argument based on its type */
                if (format[i] == 'c')
                    printf("%c", va_arg(args, int)); /* Char */
                else if (format[i] == 'i')
                    printf("%d", va_arg(args, int)); /* Integer */
                else if (format[i] == 'f')
                    printf("%f", va_arg(args, double)); /* Float */
                else if (format[i] == 's') /* String */
                {
                    str = va_arg(args, char *);
                    if (!str)
                        str = "(nil)";
                    printf("%s", str);
                }
                separator = ", "; /* Update separator for next value */
                break;
            }
            j++;
        }
        i++;
    }

    va_end(args); /* Clean up argument list */
    printf("\n"); /* Print a new line at the end */
}
