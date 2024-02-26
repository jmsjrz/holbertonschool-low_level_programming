#include "main.h"

/**
* print_line - prints a line in the terminal
* @n: The number of times the character '_' should be printed
* Return: nothing
*/
void print_line(int n)
{
	int number;

	for (number = 0; number < n; number++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
