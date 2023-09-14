#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - function that print number
 * @separator: parameter string to be printed between numbers
 * @n: parameter number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int a;
va_list arg;

va_start(arg, n);
for (a = 0; a < n; a++)
{
if (separator != NULL)
{
printf("%d", va_arg(arg, int));
if (a != n - 1)
printf("%s", separator);
}
else
printf("%d", va_arg(arg, int));
}
putchar('\n');
va_end(arg);
}
