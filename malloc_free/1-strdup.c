#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: The pointer to the string to be duplicated.
 * Return: On success, returns a pointer to the duplicated string.
 * Returns NULL if the str is NULL or if insufficient memory was available
 * to allocate space for the duplicate string.
 */
char *_strdup(char *str)
{
	char *duplicate;
	int index;
	int length;

	length = 0;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		length++;

	duplicate = malloc(sizeof(char) * (length + 1));

	if (duplicate == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		duplicate[index] = str[index];

	duplicate[length] = '\0';

	return (duplicate);
}
