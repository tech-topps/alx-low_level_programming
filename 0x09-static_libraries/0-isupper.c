#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: parameter to be checked
 * Return: 1 (Success) or 0 (failure)
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
	return (1);
else
	return (0);
}
