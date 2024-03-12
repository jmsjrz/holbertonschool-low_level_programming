#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - Returns a pointer to a 2-dimensional array of integers.
* @width: The width of the array.
* @height: The height of the array.
*
* Description: Each element of the array is initialized to 0.
* If width or height is 0 or negative, returns NULL.
* Return: A pointer to the 2D array, or NULL on failure.
*/
int **alloc_grid(int width, int height)
{
	int **array;

	int i, j;

	/* Check if width or height is 0 or negative */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allocate memory for each row */
	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);

	/* Allocate memory for each column of each row */
	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			/* If allocation fails, free previously allocated memory */
			while (i--)
			{
				free(array[i]);
			}
			free(array);
			return (NULL);
		}
	}

	/* Initialize each element of the array to 0 */
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}

	return (array);
}
