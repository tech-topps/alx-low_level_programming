#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - function that checks palidrome string
 * @s: parameter string to reverse
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
if (*s == 0)
	return (1);
return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: parameter to calculate length
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
	return (0);
return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - function that checks palindrome
 * @s: parameter string to be checked
 * @i: parameter iterator
 * @len: parameter length o the string
 * Return: 0 or 1
 */
int check_pal(char *s, int i, int len)
{
if (*(s + i) != *(s + len - 1))
	return (0);
if (i >= len)
	return (1);
return (check_pal(s, i + 1, len - 1));
}
