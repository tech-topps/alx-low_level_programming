#include "variadic_functions.h"

/**
 * print_strings - function that print strings
 * @separator: parameter seperators between strings
 * @n: parameter number
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int a;
va_list arg;

va_start(arg, n);

for (a = 0; a < n; a++)
{
char *x = va_arg(arg, char *);
if (x == NULL)
	printf("(nil)");
else
	printf("%s", x);
if (separator != NULL && a < n - 1)
	printf("%s", separator);
}
printf("\n");
va_end(arg);
}
