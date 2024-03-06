#include "main.h"

/**
* _pow_recursion - function that returns value of x to the power of y
* @x: value of x
* @y: power
* Return: x power y or -1 if y < 0
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
