#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -  prints all single digit numbers of base 16
 *
 * Return: always 0
 */
int main(void)
{
int numbers;
int letters;

for (numbers = 0; numbers < 10; numbers++)
{
putchar('0' + numbers);
}
for (letters = 'a'; letters <= 'f'; letters++)
{
putchar(letters);
}
putchar('\n');
return (0);
}
