#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> /* Required for isdigit() function */

/**
* main - Entry point, program that adds positive numbers.
* @argc: Argument counter.
* @argv: Argument variables.
*
* Description: This program takes command line arguments,
* all expected to be positive numbers, and adds them together.
* It returns 0 if all inputs are valid numbers, and returns 1
* if any of the inputs contain a character that is not a digit.
* It also prints an error message for invalid inputs.
*
* Return: 0 if successful, 1 if an error is encountered.
*/
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	/* If no argument is passed, return 0 */

	for (i = 1; i < argc; i++)
	{
		/* Loop through the arguments */
		for (int j = 0; argv[i][j] != '\0'; j++)

		{
			/* Loop through each character of an argument */
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			/* If a character is not numeric: print error and exit */
		}
		sum += atoi(argv[i]);
	}
	/* Convert with atoi and add up */
	printf("%d\n", sum);
	return (0);
}
