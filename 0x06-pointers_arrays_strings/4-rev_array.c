#include "main.h"

/**
 * reverse_array - function that reverse array of integers
 * @a: parameter array
 * @n: parameter number of elements of array
 * Return: Always 0
 */

void reverse_array(int *a, int n)
{
int b;
int c;

for (b = 0 ; b < n-- ; b++)
{
c = a[b];
a[b] = a[n];
a[n] = c;
}
}
