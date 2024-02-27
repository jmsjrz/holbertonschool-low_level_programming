#include "main.h"

/**
* _puts - print a string
* @str: pointer to the string
* Return: 0
*/
void _puts(char *str)
{
	int i;

	for (int i = 0; str[i] != '\0'; i++)

	{
		putchar(str[i]);
	}

	putchar('\n');
}
