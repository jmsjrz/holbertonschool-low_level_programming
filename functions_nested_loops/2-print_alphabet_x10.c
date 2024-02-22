#include "main.h"

/**
 * print_alphabet_x10 - Prints all the alphabet 10 times
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char letter;
	int number;

	for (number = 0 ; number < 10 ; number++)
	{
		for (letter = 'a' ; letter <= 'z' ; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}

