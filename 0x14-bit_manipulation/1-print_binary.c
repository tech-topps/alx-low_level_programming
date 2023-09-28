#include "main.h"

/**
 * print_bn - function the binary reps number recursively
 * @n: parametal decimal input
 * Return: 0
 */
void print_bn(unsigned long int n)
{
if (n == 0)
	return;
print_bn(n >> 1);
if ((n & 1) == 1)
	_putchar('1');
if ((n & 1) == 0)
	_putchar('0');
}

/**
 * print_binary - function that prints binary
 * @n: parameter decimal converted
 * Return: 0
 */
void print_binary(unsigned long int n)
{
if (n == 0)
	_putchar('0');
else
{
print_bn(n);
}
}
