#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -  prints the alphabet in lowercase using putchar function
 *
 * Return: always 0
 */
int main(void)
{
	char a;

	for (a = 'a' ; a <= 'z' ; a= 'A' ; a = 'Z' ; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}

