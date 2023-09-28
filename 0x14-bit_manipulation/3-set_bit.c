#include "main.h"
#include <stdio.h>

/**
 * set_bit - function that set bit number to 1
 * @n: parameter pointer to the bit
 * @index: parameter position of he bit
 * Return: 1 on sucess
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int base;

if (index > sizeof(unsigned int) * 8)
	return (-1);
base = 1;
base = base << index;
*n = ((*n) | base);
return (1);
}
