#include "function_pointers.h"

/**
* array_iterator - Executes a function given as a parameter
* on each element of an array.
* @array: The array of integers.
* @size: The size of the array.
* @action: A pointer to the function to use on each element of the array.
*
* Description: If array and action are not NULL, this function
* iterates over each element of the array and applies the function
* pointed to by action to these elements.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0; /* Initialize index */

	if (array != NULL && action != NULL)
	{
		while (i < size) /* Continue until the end of the array is reached */
		{
			action(array[i]); /* Execute the function pointed to by action */
			i++; /* Move to the next element */
		}
	}
}
