#include "3-calc.h"

/**
* get_op_func - Selects the correct operation function.
* @s: The operator passed as argument.
*
* Return: Pointer to the function corresponding to operator given as parameter.
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL} /* Marks end of the array */
	};
	int i = 0;

	while (ops[i].op != NULL) /* Traverse ops array */
	{
		/* If operator matches 's' */
		if (ops[i].op[0] == s[0])
		{
			return (ops[i].f); /* Return matching function */
		}
		i++;
	}

	return (NULL); /* Return NULL if no match */
}
