#include <stdio.h>

/**
 * main - find first 50 fibonacci number
 *
 * Return: 0
 */

int main(void)
{
int val1 = 1;
int val2 = 2;
int next;
int i;

printf("%d, ", val1);
for (i = 1 ; i < 50 ; i++)
{
printf("%d", val2);
next = val1 + val2;
val1 = val2;
val2 = next;
}
printf("\n");
return (0);
}
