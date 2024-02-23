#include "main.h"

/**
 * print_to_98 - prints all natural numbers
 * @n: number generate by print_to_98
 * Return: 0
 */
void print_to_98(int n)
{
while (n < 98)
{
print_number(n);
_putchar(',');
_putchar(' ');
n++;
}

while (n > 98)
{
print_number(n);
_putchar(',');
_putchar(' ');
n--;
}
print_number(98);
_putchar('\n');
}
