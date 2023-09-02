#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: parameter area to fill with bytes
 * @n: parameter number of bytes
 * @b: parameter constant byte
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;

for (a = 0 ; a < n ; a++)
	s[a] = b;
return (s);
}
