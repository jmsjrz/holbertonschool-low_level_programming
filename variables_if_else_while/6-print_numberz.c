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
int a;

for (a = 0; a < 10; a++)
{
putchar('0' + a);
}
putchar('\n');
return (0);
}
