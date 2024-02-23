#include "main.h"

/**
 * print_to_98 - prints all natural numbers
 * @n: number generate by print_to_98
 * Return: 0
 */
void print_to_98(int n)
{
	int n;

	for (n = 0; n <= 98; n++)
	{
	_putchar('0' + n);
	if (n < 98)
	{
	_putchar(',');
	_putchar(' ');
	}
	}
	_putchar('\n');
	return (0);
}
