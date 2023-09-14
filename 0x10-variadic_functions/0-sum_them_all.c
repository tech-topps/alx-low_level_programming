#include "variadic_functions.h"

/**
 * sum_them_all - function that sum all parameter of a program
 * @n: parameter number of arguments
 * Return: sum of the arguments
 */

int sum_them_all(const unsigned int n, ...)
{
int tsum = 0;
unsigned int a;
va_list arg;

if (n == 0)
	return (0);
va_start(arg, n);
for (a = 0; a < n; a++)
{
tsum = tsum + va_arg(arg, int);
}
va_end(arg);
return (tsum);
}
