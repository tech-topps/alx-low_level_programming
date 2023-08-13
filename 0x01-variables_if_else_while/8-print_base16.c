#include <stdio.h>

/**
 * main - Empty point
 *
 * Return: 0 (Success)
 */

int main(void)
{
int i;
char m;

for (i = 0 ; i < 10 ; i++)
	putchar(i + '0');
for (m = 'a' ; m <= 'f' ; m++)
	putchar(m);
putchar('\n');
return (0);
}
