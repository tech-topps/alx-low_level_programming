#include "main.h"

/**
 * _pow_recursion - function that finds power of a number raised to a number
 * @x: parameter base number
 * @y: parameter power
 * Return: x power y
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
	return (-1);
else if (y == 0)
	return (1);
else
	return (x * _pow_recursion(x, (y - 1)));
return (0);
}
