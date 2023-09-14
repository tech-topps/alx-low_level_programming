#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function that print name
 * @name: parameter name to print
 * @f: parameter function pointer
 */

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
	return;
f(name);
}
