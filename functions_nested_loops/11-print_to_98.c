#include "main.h"

/**
 * print_to_98 - prints all natural numbers
 * @n: number generate by print_to_98
 * Return: 0
 */
void print_to_98(int n)
{
	int number;

	for (number = 'n'; number <= 98; number++)
	{
	_putchar('0' + number);
	if (number < 98)
	{
	_putchar(',');
	_putchar(' ');
	}
	}
	_putchar('\n');
	return (0);
}
