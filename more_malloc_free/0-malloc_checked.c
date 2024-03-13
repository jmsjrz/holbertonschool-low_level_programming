#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - Allocates memory and exits on failure.
* @b: Amount of bytes to allocate.
*
* Return: Pointer to the allocated memory.
*/
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
