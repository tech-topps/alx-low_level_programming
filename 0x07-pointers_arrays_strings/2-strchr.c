#include "main.h"

/**
 * _strchr - function that locate a character in a string
 * @s: parameter string to search
 * @c: parameter search in s
 * Return s or NULL
 */

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
	return (s);
s++;
}
if (*s == c)
	return (s);
return (NULL);
}
