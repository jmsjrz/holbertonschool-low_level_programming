#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -  prints all single digit numbers of base 10
 *
 * Return: always 0
 */
int main(void)
{
int nombre;
int lettre;

for (nombre = 0; nombre < 10; nombre++)
{
putchar('0' + nombre);
}
for (lettre = 'a'; lettre < 'f'; lettre++)
{
putchar('lettre');
}
putchar('\n');
return (0);
}
