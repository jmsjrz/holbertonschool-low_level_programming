#include "main.h"
#include <stdlib.h>

/**
* array_range - Creates an array of integers
* @min: Minimum value in the array
* @max: Maximum value in the array
*
* Description: Generates an array of integers that contains all the values
* from min (inclusive) to max (inclusive), ordered from min to max. If min
* is greater than max, the function returns NULL to indicate an error. The
* function also returns NULL if memory allocation fails.
*
* Return: Pointer to the newly created array or NULL if min > max or if
* memory allocation fails.
*/
int *array_range(int min, int max)
{
	int *array;

	int count = 0; /* Element counter */

	int value = min;

	int total_elements;

	if (min > max)
	{
		return (NULL);
	}

	total_elements = max - min + 1;
	array = malloc(sizeof(int) * total_elements);
	if (array == NULL)
	{
		return (NULL); /* Check for successful allocation */
	}

	for (count = 0; count < total_elements; count++)
	{
		array[count] = value++; /* Assign and increment value */
	}
	return (array);
}
