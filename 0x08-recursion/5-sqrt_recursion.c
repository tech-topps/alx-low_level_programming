#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - function that returns natural square root
 * @n: parameter number to calculate
 * Return: result of square root
 */

int _sqrt_recursion(int n)
{
if (n < 0)
	return (-1);
return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - function recurses to find squares
 * @n: parameter number to calculate square
 * @i: parameter iterator
 * Return: result of square root
 */
int actual_sqrt_recursion(int n, int i)
{
if (i * i > n)
	return (-1);
if (i * i == n)
	return (i);
return (actual_sqrt_recursion(n, i + 1));
}
