#include "main.h"

/**
 * _strpbrk - function that searches for a set of bytes in a string
 * @s: parameter to search from
 * @accept: parameter to search in s
 * Return: accept or NULL
 */

char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
char *i = accept;

while (*i != '\0')
{
if (*s == *i)
	return (s);
i++;
}
s++;
}
return (NULL);
}
