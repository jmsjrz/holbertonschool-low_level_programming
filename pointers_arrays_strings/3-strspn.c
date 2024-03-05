#include "main.h"

/**
* _strspn - gets the length of a prefix substring.
* @s: main string to be scanned.
* @accept: string containing the list of characters to match in s.
*
* Return:  number of bytes in the initial segment of s
*         which consist only of bytes from accept.
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	char *start_accept = accept;

	while (*s && *accept)
	{
		while (*accept)
		{
			if (*s == *accept)
			{
				count++;
				break;
			}
			accept++;
		}
		if (!*accept)
		{
			break;
		}
		s++;
		accept = start_accept;
	}

	return (count);
}
