#include <stdio.h>
#include "main.h"

/**
* print_array - print half of the string
* @n: number of elements of the array to be printed
* @a: pointer to an array
* Return: nothing
*/

void print_array(int *a, int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		printf("%d", a[count]);
		if (count <= n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
