#include "main.h"

/**
* swap_int - swap two int value eachothers
* @a: pointer to an int
* @b: pointer to an int
* Return: nothing
*/
void swap_int(int *a, int *b)
{
	int temporaryvar = *a;

	*a = *b;
	*b = temporaryvar;
}
