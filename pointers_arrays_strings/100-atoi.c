#include "main.h"
#include <stdio.h>

/**
* _atoi - entry point
* @s: caracter to convert
* Return: numerical value of the string
*/

int _atoi(char *s)
{
	int result = 0;

	int sign = 1; /* signe du nombre */

	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '+')
		{
			i++;
		}
		else if (s[i] == '-')
		{
			sign = -1;
			i++;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
			i++;
		}
		else
		{
			break;
		}
	}
	return ((result * sign));
}
