#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @n: parameter number of bytes
 * @src: parameter source string
 * @dest: parameter destination string
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
int lenght = strlen(dest);
int a;

for (a = 0 ; a < n && *src != '\0' ; a++)
{
dest[lenght + a] = *src;
src++;
}
dest[lenght + a] = '\0';
return (dest);
}
