#include <stdio.h>

/**
* string_toupper -  changes all lowercase letters of a string to uppercase.
* @str: string to be converted
* Return: pointer to the string
*/
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32; /* pour convertir en majuscule*/
		}
		i++;
	}

	return (str);
}
