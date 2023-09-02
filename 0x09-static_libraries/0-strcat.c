#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @src: parameter source string
 * @dest: parameter destination string
 * Return: dest;
 */

char *_strcat(char *dest, char *src)
{
int i;
int srclen = 0;
int destlen = 0;

for (i = 0 ; dest[i] != '\0' ; i++)
	destlen++;
for (i = 0 ; src[i] != '\0' ; i++)
	srclen++;
for (i = 0 ; i <= srclen ; i++)
	dest[destlen + i] = src[i];
return (dest);
}
