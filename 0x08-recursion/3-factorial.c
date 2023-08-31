#include "main.h"

/**
 * factorial - function that finds the factorial of a number
 * @n: parameter number to find the factorial
 * Return: factorial
 */

int factorial(int n)
{
if (n < 0)
	return (-1);
else if (n == 0)
	return (1);
else
	return (n * factorial(n - 1));
}
