#include "main.h"

/**
 * _atoi - function that convert a string to an integar
 * @s: parameter pointer to convert
 * Return: a integer
 */

int _atoi(char *s)
{
int a = 0;
unsigned int b = 0;
int i = 1;
int j = 0;

while (s[a])
{
if (s[a] == 45)
{
i *= -1;
}
while (s[a] >= 48 && s[a] <= 57)
{
j = 1;
b = (b * 10) + (s[a] - '0');
a++
}
if (j == 1)
{
break;
}
a++;
}
b *= i;
return (b);
}
