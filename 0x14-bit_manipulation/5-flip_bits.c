#include "main.h"
#include <stdio.h>

/**
 * flip_bits - function that return number of bit flipped
 * @n: parameter number to compare firstly
 * @m: paremeter number to compare secondly
 * Return: number of flipped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int base;
unsigned long int compare;

base = n ^ m;
for (compare = 0; base > 0;)
{
if ((base & 1) == 1)
	compare++;
base = base >> 1;
}
return (compare);
}
