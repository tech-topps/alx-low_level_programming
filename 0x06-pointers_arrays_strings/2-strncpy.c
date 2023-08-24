#include "main.h"

/**
 * _strncpy - function that copy strings
 * @n: parameter number of bytes to copy
 * @src: parameter source string
 * @dest: parameter destination string
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int a;

for (a = 0 ; a < n && src[a] != '\0' ; a++)
	dest[a] = src[a];
while (a < n)
{
dest[a] = '\0';
a++;
}
return (dest);
}
