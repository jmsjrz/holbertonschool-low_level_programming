#include "3-calc.h"

/**
* main - Entry point
* @argc: Number of command line arguments
* @argv: Array of command line arguments
*
* Description: Executes simple arithmetic operations such as addition,
* subtraction, multiplication, division, and modulo based on user input.
* It requires exactly three arguments: the first operand, the operator,
* and the second operand. If the input does not meet these requirements,
* or if the operator is unrecognized, the program exits with an error.
*
* Return: 0 on successful operation, otherwise exits with an error code.
*/
int main(int argc, char *argv[])
{
	int num1, num2; /* Variables for the operands converted from strings to int */

	/* Pointer to the function that performs the selected arithmetic operation */
	int (*perform_operation)(int, int);

	/* Ensure exactly three arguments are passed: operand1 operator operand2 */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* Verify that the operator argument is a single character followed by '\0' */
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	/* Assign the function to perform the operation, or NULL if invalid */
	perform_operation = get_op_func(argv[2]);

	/* Check if a valid operation function was found */
	if (perform_operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	/* Convert the operand arguments from strings to integers */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	/* Execute the operation and print the result */
	printf("%d\n", perform_operation(num1, num2));
	return (0);
}
