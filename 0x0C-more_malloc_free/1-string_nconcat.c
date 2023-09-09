#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates string
 * @s1: parameter string 1
 * @s2: parameter string 2
 * @n: parameter number of bytes to concatenates freom s2
 * Return: string concatenated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int s1len = 0;
unsigned int s2len = 0;
char *out;
unsigned int a;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
for (a = 0; s1[a] != '\0'; a++)
	s1len++;
for (a = 0; s2[a] != '\0'; a++)
	s2len++;

out = malloc(sizeof(char) * (s1len + n) + 1);
if (out == NULL)
	return (NULL);
if (n >= s2len)
{
for (a = 0; s1[a] != '\0'; a++)
	out[a] = s1[a];
for (a = 0; s2[a] != '\0'; a++)
	out[s1len + a] = s2[a];
out[s1len + a] = '\0';
}
else
{
for (a = 0; s1[a] != '\0'; a++)
	out[a] = s1[a];
for (a = 0; a < n; a++)
	out[s1len + a] = s2[a];
out[s1len + a] = '\0';
}
return (out);
}
