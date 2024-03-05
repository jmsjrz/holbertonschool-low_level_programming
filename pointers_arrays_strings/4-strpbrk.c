#include "main.h"
#include <stdio.h>

/**
* _strpbrk - searches a string for any of a set of bytes.
* This function scans the string s for the first occurrence of any
* of the bytes in the string accept.
* @s: string to be searched.
* @accept: set of bytes to search for.
* Return: pointer to the byte in s that matches one of the bytes in accept,
* or NULL if no such byte is found.
*/
char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s)
	{
		a = accept;
		while (*a)
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}

	return (NULL);
}
