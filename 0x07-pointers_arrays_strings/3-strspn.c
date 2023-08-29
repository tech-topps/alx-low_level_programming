#include "main.h"

/**
 * _strspn - function that get the lenght of a prefix substring
 * @s: parameter string to search from
 * @accept: parameter string to search
 * Return: number of matched character
 */

unsigned int _strspn(char *s, char *accept)
{
int a, b;

for (a = 0 ; s[a] != '\0' ; a++)
{
for (b = 0 ; s[a] != accept[b] ; b++)
{
if (accept[b] == '\0')
	return (a);
}
}
return (0);
}
