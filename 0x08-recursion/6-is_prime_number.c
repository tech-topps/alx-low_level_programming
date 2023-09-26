#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - function that says an integer is prime or not
 * @n: parameter evaluate number
 * Return: 1 (prime number) or 0 (if not)
 */

int is_prime_number(int n)
{
if (n <= 1)
	return (0);
return (actual_prime(n, n - 1));
}

/**
 * actual_prime - function that calculates prime number recursively
 * @n: parameter evaluate number
 * @i: parameter iterator
 * Return: 1 or 0
 */
int actual_prime(int n, int i)
{
if (i == 1)
	return (1);
if (n % i == 0 && i > 0)
	return (0);
return (actual_prime(n, i - 1));
}
