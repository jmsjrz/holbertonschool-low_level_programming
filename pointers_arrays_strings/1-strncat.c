#include "main.h"

/**
* _strncat - concatenates two strings using at most n bytes from src.
* @dest: destination string
* @src: source string
* @n: number of byyes for src
* Return: pointer dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;

	int i = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	while (i < n && src[i] != '\0')
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}

	dest[dest_len] = '\0';

	return (dest);
}
