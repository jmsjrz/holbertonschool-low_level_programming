#include "main.h"

/**
* _strcat - concatenates two strings.
* @dest: destination string
* @src: source string
* Return: pointer dest
*/
char *_strcat(char *dest, char *src)
{
	int dest_len;
	int src_index;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
	{
	}

	for (src_index = 0; src[src_index] != '\0'; src_index++)
	{
		dest[dest_len + src_index] = src[src_index];
	}

	dest[dest_len + src_index] = '\0';

	return (dest);
}
