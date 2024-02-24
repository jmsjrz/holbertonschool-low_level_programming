#include "main.h"

/**
 * times_table - print the multiplication table
 * Return: nothing
 */

void times_table(void)
{
	int number1, number2, multiplication;

	for (number1 = 0; number1 <= 9; number1++)
	{
		for (number2 = 0; number2 <= 9; number2++)
		{
			multiplication = (number1 * number2);
			if (number2 == 0)
			{
				_putchar('0');
			}
			if (multiplication <= 9 && number2 != 0)
			{
				_putchar(' ');
				_putchar('0' + multiplication);
			}
			else if (number2 != 0)
			{
				_putchar('0' + (multiplication / 10));
				_putchar('0' + (multiplication % 10));
			}
			if (number2 < 9)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
		_putchar(10);
	}
}
