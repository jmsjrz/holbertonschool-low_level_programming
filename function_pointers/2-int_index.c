#include "function_pointers.h"

/**
* int_index - searches for an integer in an array using a comparison function
* @array: the array of integers to search through
* @size: the size of the array
* @cmp: pointer to the comparison function to use for searching
*
* Return: the index of the first element for which the cmp function does
* not return 0, or -1 if no such element is found or if size <= 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0; /* Initialize index to 0 */

	/* Check for valid input */
	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	/* Loop through array with while */
	while (i < size)
	{
		/* Apply comparison function */
		if (cmp(array[i]))
		{
			/* If comparison true, return index */
			return (i);
		}
		i++; /* Move to the next element */
	}

	/* No matching element found */
	return (-1);
}
