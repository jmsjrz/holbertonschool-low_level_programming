#include "main.h"

/**
 * print_alphabet - Prints all the alphabet 10 times
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char letter;
	while (letter <= 10)
	for (letter = 'a' ; letter <= 'z' ; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}

