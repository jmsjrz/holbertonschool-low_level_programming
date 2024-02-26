#include "main.h"

/**
* more_numbers - Prints 10 times from 0 to 14
* Return: nothing
*/
void more_numbers(void)
{
	int times;

	int num;

	for (times = 0; times < 10; times++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar('1');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
