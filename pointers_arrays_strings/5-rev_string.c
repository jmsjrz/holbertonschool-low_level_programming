#include "main.h"

/**
* rev_string -  reverse a string
* @s: string concerned by rev_string
*/
void rev_string(char *s)
{

char temp;

int i;

int count = 0;

int count2 = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	count2 = count - 1;

	for (i = 0; i < count / 2; i++)
	{
		temp = s[i];
		s[i] = s[count2];
		s[count2--] = temp;
	}
}
