#include "main.h"
/**
 * print_alphabet_x10 - print alphabet x10 in lowercase
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
int j;
char i;

for (j = 0 ; j < 10 ; j++)
{
for (i = 'a' ; i <= 'z' ; i++)
	_putchar(i);
_putchar('\n');
}

}
