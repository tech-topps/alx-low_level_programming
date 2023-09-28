#include "main.h"
#include <stdio.h>

/**
 * clear_bit - function that set value of a bit
 * @n: parameter pointer to number
 * @index: parameter to change bit
 * Return: int
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int base;

base = 1;
base = base << index;

if (index > sizeof(unsigned long int) * 8 || n == NULL)
	return (-1);
if (((*n >> index) & 1) == 1)
	*n = base ^ *n;

return (1);
}
