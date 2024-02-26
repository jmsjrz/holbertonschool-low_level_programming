#include "main.h"

/**
 * more_numbers - Prints 10 times from 0 to 14
 * Return: nothing
 */
void more_numbers(void)
{
	int number1;
	int number;

	for (number = 0 ; number < 10 ; number++)
	{
		for (number1 = '0' ; number1 <= '14' ; number1++)
		{
			_putchar(number1);
		}
		_putchar('\n');
	}
}
