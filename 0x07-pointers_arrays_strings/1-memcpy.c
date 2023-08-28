#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: parameter destination
 * @src: parameter source
 * @n: parameter number of byte
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;

for (a = 0 ; a < n ; a++)
	dest[a] = src[a];
return (dest);
}
