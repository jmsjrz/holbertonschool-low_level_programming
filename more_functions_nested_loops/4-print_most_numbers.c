#include "main.h"

/**
*print_most_numbers - Prints all the numbers except few
*Return: nothing
*/
void print_most_numbers(void)
{
	int number;

		for (number = '0' ; number <= '9' ; number++)
	{
		if (number == '2' || number == '4')
		continue;
		_putchar(number);
	}
	_putchar('\n');
}
