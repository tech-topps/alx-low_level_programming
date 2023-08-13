#include <stdio.h>

/**
 * main - printing all letters except q and e
 *
 * Result: Always 0 (Success)
 */

int main(void)
{
char i;

for (i = 'a' ; i <= 'z' ; i++)
	if (i != 'q' && i != 'e')
		putchar(i);
putchar('\n');

return (0);
}
