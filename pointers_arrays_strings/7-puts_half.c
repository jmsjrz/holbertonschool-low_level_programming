#include "main.h"

/**
* puts_half - print half of the string
* @str: pointer to the string
*/
void puts_half(char *str)
{
	int count = 0;

	int half;

	while (str[count] != '\0')
	{
		count++;
	}

	if (count % 2 == 0)
	{
		half = count / 2;
	}
	else
	{
		half = (count + 1) / 2;
	}

	for (int halfstring = half; halfstring < count; halfstring++)

	{
		_putchar(str[halfstring]);
	}

	_putchar('\n');
}
