#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -  prints the alphabet in lowercase excluding 'e' and 'q'
 *
 * Return: always 0
 */
int main(void)
{
	char a;

	for (a = 'a' ; a <= 'z' ; a++)
	{
		if (a == 'e' || a == 'q')
	{
		continue;
	}
		putchar(a);
	}
	putchar('\n');
	return (0);
}

