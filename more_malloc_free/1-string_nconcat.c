#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - Concatenates n bytes of s2 to s1.
* @s1: First string.
* @s2: Second string, up to n bytes concatenated.
* @n: Max number of bytes from s2 to add to s1.
*
* Description: Creates a new string with s1 followed by the first n bytes of s2
* If n >= s2's length, s2 is fully used. NULL inputs are treated as empty.
* The result is null-terminated. Memory allocation failure returns NULL.
*
* Return: Pointer to the concatenated string, or NULL if it fails.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length1 = 0, length2 = 0, i;

	char *result;

	/* Handle NULL inputs as empty strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Measure lengths */
	while (s1[length1])
		length1++;
	while (s2[length2])
		length2++;

	/* Adjust n if greater than length of s2 */
	n = (n > length2) ? length2 : n;

	/* Allocate space for the new string */
	result = malloc((length1 + n + 1) * sizeof(char));
    /* +1 for the null terminator */
	if (result == NULL)
		return (NULL);

	/* Copy s1 to the new string */
	for (i = 0; i < length1; i++)
		result[i] = s1[i];

	/* Concatenate up to n bytes of s2 */
	for (i = 0; i < n; i++)
		result[length1 + i] = s2[i];

	/* Null terminate the result */
	result[length1 + n] = '\0';

	return (result);
}
