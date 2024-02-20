#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -  determine if the last digit is < than 5, null or > than 6 !=0
 *
 * Return: always 0
 */
int main(void)
{
	int n;
	int lstdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lstdigit = (n % 10);

	if (lstdigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lstdigit);
	}
	else if (lstdigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lstdigit);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lstdigit);
	}
	return (0);
}

