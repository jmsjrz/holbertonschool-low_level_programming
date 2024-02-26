#include "main.h"

/**
*print_numbers - Prints all the numbers except few
*Return: Always 0
*/
void print_numbers(void)
{
	int number;

	{
		for (number = '0' ; number <= '9' ; number++)
	{
		if (number == '2' || number == '4')
		continue;
	}
	{
		_putchar(number);
	}
	_putchar('\n');
	}
}
