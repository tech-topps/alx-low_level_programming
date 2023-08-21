#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: val 1
 * @b: val 2
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
int g;

g = *a;
*a = *b;
*b = g;
}
