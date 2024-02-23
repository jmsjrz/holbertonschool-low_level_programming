#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers
 * @n: number generate by print_to_98
 * Return: nothing
 */
void print_to_98(int n)
{

if (n >= 98)
{
for (; n > 98; n--)
printf("%d, ", n);
}

else
{
for (; n < 98; n++)
printf("%d, ", n);
}
printf("%d\n", n);

}
