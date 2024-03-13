#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _calloc - Allocates memory for an array using calloc
* @nmemb: Number of elements
* @size: Size of each element (in bytes)
*
* Description: This function allocates memory for an array of nmemb elements
* of size bytes each and returns a pointer to the allocated memory.
* The memory is set to zero. If nmemb or size is 0, _calloc returns NULL.
*
* Return: Pointer to the allocated memory, or NULL if the allocation fails
* or if nmemb or size is 0.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	unsigned int i; /* Counter for loop */

	unsigned int total_size; /* Total size of allocated memory */

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total_size = nmemb * size; /* Calculate total size */
	p = malloc(total_size); /* Memory allocation */
	if (p == NULL)
	{
		return (NULL); /* Check for successful allocation */
	}

	for (i = 0; i < total_size; i++)
	{
		p[i] = 0; /* Initialize each element to 0 */
	}

	return (p);
}
