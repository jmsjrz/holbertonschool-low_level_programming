#include "main.h"

/**
 *print_alphabet_x10 - Prints all the alphabet 10 times
 *Return: Always 0
*/
void print_alphabet_x10(void)
{
	int number;

	{
		for (number = '0' ; number <= '9' ; number++)
		{
			_putchar(number);
		}
		_putchar('\n');
	}
}
