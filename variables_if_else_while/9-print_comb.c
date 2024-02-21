#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints all the combinations of single digit numbers
 * 
 * Return: Always 0
 */
int main(void)
{
    int num;

    for (num = 0; num <= 9; num++)
    {
        putchar('0' + num);
        if (num < 9)
        {
            putchar(',');  
            putchar(' ');
        }
    }
    putchar('\n');
    return 0;
}

