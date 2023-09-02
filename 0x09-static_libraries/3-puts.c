#include "main.h"

/**
 * _puts - function that prints a string
 * @str: parameter string to be printed
 * Return: Always 0
 */

void _puts(char *str)
{
int i;

for (i = 0 ; str[i] != '\0' ; i++)
	_putchar(str[i]);
_putchar('\n');
}
