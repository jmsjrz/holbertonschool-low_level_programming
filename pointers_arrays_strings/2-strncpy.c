#include "main.h"

/**
 * _strncpy - copy the string
 * @dest: destination string
 * @src: source string
 * @n: int
 * Return: pointer dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index1 = 0;
	int index2 = 0;

	while (src[index2] != '\0' && index2 < n)
	{
		dest[index1] = src[index2];
		index1++;
		index2++;
	}
	if (index2 < n)
	{
		while (index1 < n)
		{
			dest[index1] = '\0';
			index1++;
		}
	}
	return (dest);

}
