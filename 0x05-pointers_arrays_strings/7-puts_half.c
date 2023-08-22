#include "main.h"

/**
 * puts_half - function that print half of a string
 * @str: parameter string to be printed
 * Return: Always 0
 */

void puts_half(char *str)
{
int a, b, count = 0;

for (a = 0 ; str[a] != '\0' ; a++)
	count++;
b = (count - 1) / 2;
for (a = b + 1 ; str[a] != '\0' ; a++)
	_putchar(str[a]);
_putchar('\n');
}
