#include "main.h"
#include <stdlib.h>

/**
* str_concat - Concatenates two strings.
* @s1: The first string.
* @s2: The second string.
*
* Description: Concatenates two strings into a newly allocated space in memory
* If either string is NULL, it is treated as an empty string. The resulting
* string is null-terminated.
*
* Return: A pointer to the concatenated string. NULL if the allocation fails
*/
char *str_concat(char *s1, char *s2)
{
	int length1 = 0;
	int length2 = 0;
	int i;
	char *result;

	/* Treat NULL strings as empty strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate the length of s1 then s2 */
	while (s1[length1])
		length1++;
	while (s2[length2])
		length2++;

	/* Allocate memory for the concatenated string */
	result = malloc((length1 + length2 + 1) * sizeof(char));
	/* +1 for the null terminator */

	/* Check if memory allocation was successful */
	if (result == NULL)
		return (NULL);

	/* Copy s1 into the new string */
	for (i = 0; i < length1; i++)
		result[i] = s1[i];

	/* Concatenate s2 to the new string */
	for (i = 0; i <= length2; i++) /* <= to include the null terminator from s2 */
		result[length1 + i] = s2[i];

	return (result);
}
