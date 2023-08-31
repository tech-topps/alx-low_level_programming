#include "main.h"

/**
 * _strlen_recursion - function that finds the lenght of a string
 * @s: parameter string to find its lenght
 * Return: lenght of string
 */

int _strlen_recursion(char *s)
{
if (*s != '\0')
{
return (1 + _strlen_recursion(s + 1));
}
return (0);
}
