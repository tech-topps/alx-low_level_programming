#include "main.h"

/**
 * _strdup - function that copy string to newly allocated space in memory
 * @str: parameter string to copy to new memory
 * Return: pointer to the memory
 */

char *_strdup(char *str)
{
int a;
char *copy;
int new = 0;

if (str == NULL)
	return (NULL);

for (a = 0; str[a] != '\0'; a++)
	new++;

copy = malloc(sizeof(char) * new + 1);

if (copy == NULL)
	return (NULL);
for (a = 0; str[a] != '\0'; a++)
	copy[a] = str[a];

return (copy);
}
