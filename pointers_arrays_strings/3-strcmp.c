#include "main.h"

/**
* _strcmp - compare two strings
* @s1: string 1 to be compared
* @s2: string 2 to be compared
* Return: return the difference
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);

		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
