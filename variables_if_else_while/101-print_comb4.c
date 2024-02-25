#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - prints all the combinations of three digit numbers with conditions
*
* Return: Always 0
*/
int main(void)
{
	int i, j, k;

	for (i = 0; i <= 7; i++)
	{
		for (j = i + 1; j <= 8; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);

				if (i < 7 || j < 8 || k < 9)
				{

					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
