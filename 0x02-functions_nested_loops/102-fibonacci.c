#include <stdio.h>

/**
 * main - find first 50 fibonacci number
 *
 * Return: 0
 */

int main(void)
{
unsigned long int val1 = 1;
unsigned long int val2 = 2;
unsigned long int next;
int i;

printf("%lu, ", val1);
for (i = 1 ; i < 50 ; i++)
{
printf("%lu", val2);
next = val1 + val2;
val1 = val2;
val2 = next;
if (i != 49)
	printf(", ");
}
printf("\n");
return (0);
}
