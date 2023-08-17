#include "main.h"
/**
 * _isdigit - function that checks for 0 through 9
 * @c: parameter function
 * Return: 0 on failure or 1 on success
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
	return (1);
else
	return (0);
}
