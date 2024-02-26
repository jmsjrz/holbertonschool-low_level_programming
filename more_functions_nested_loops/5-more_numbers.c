#include "main.h"

/**
 * more_numbers - Prints 10 times from 0 to 14
 * Return: nothing
 */
void more_numbers(void)
{
	int times;
	int number;

	for (times = 0 ; times < 10 ; times++)
	{
		for (number = '0' ; number <= '14' ; number++)
		{
			_putchar(number);
		}
		_putchar('\n');
	}
}
