#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -  determine if the number is positive, negative or null
 *
 * Return: always 0
 */
int main(void)
{
	int n;
	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = (n % 10);

	if (lastdigit > 5)
	{
		printf("Last digit of  %d is %d\n", n, lastdigit);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d\n", n, lastdigit);
	}
	else
	{
		printf("Last digit of %d is %d\n", n, lastdigit);
	}
	return (0);
}

