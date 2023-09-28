#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - function that convert binary to integer
 * @b: parameter pointer to a string
 * Return: decimal converted
 */

unsigned int binary_to_uint(const char *b)
{
int bit;
unsigned int length;
unsigned int a;
unsigned int c;
unsigned int add;
unsigned int raise;

bit = 2;
add = 0;
raise = 1;

if (b == NULL)
	return (0);
for (length = 0; b[length] != '\0'; length++)
	;
if (length == 1 && (b[0] == '0' || b[0] == '1'))
{
return (b[0] - 48);
}
for (a = 0; b[a] != '\0'; a++)
{
if (b[a] != '0' && b[a] != '1')
return (0);

for (c = length - 1; c > 0; c--)

raise = raise *bit;
add = add + (raise * (b[a] - 48));
length--;
raise = 1;
}
return (add);
}
