#include "main.h"

/**
 * _strlen - find the lenght of a string
 * @s: parameter string to be counted
 * Return: string lenght
 */

int _strlen(char *s)
{
int i;
int count = 0;

for (i = 0 ; s[i] != '\0' ; i++)
	count++;
return (count);
}
