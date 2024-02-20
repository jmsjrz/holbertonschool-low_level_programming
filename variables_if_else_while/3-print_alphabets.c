#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -  prints the alphabet in lowercase then uppercase using putchar function
 *
 * Return: always 0
 */
int main(void)
{
	char a;
	char A;
	for (a = 'a' ; a <= 'z' ; a++)
	{
		putchar(a);
	}
	for (A = 'A' ; A <= 'Z' ; A++)
	{
		putchar(A);
	}
	putchar('\n');
	return (0);
}

