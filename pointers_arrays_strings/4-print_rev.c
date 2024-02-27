#include "main.h"

/**
* print_rev - print a reversed string
* @s: string to print
*/
void print_rev(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	for (int i = count - 1; i >= 0; i--)

	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
