#include "main.h"
#include <stdio.h>

/**
* _strchr - locates a character in a string
* @s: string where character must be located
* @c: character to be located
* Return: pointer to the first occurence
*/
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}

	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
