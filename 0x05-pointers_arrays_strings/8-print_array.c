#include "main.h"

/**
 * print_array - function that print n elements of an array of integer
 * @a: parameter array to be used
 * @n: parameter of elements to be printed
 * Return: Always 0
 */

void print_array(int *a, int n)
{
int i;

for (i = 0 ; i < n ; i++)
{
printf("%d", a[i]);
if (i < n - 1)
	printf(", ");
}
printf("\n");
}
