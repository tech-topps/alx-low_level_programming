#include "main.h"

/**
 * print_rev - function that print string in reverse
 * @s: parameter string to be printed
 * Return: Always 0
 */

void print_rev(char *s)
{
int i;
int count = 0;

for (i = 0 ; s[i] != '\0' ; i++)
	count++;
for (i = count - 1 ; i >= 0 ; i--)
	_putchar(s[i]);
_putchar('\n');
}
