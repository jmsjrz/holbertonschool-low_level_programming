#include "main.h"
#include <stdio.h>

/*
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The set of bytes to search for.
 * Description: Locates the first occurrence in the string s
 * of any of the bytes in the string accept.
 * Returns: A pointer to the byte in s that matches one of the bytes
 * in accept, or NULL if no such byte is found.
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
