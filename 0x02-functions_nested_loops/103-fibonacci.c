#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0
 */

int main(void)
{
int limit = 4000000;
int val1 = 1;
int val2 = 2;
int next;
int sum = 2;

while (next <= limit)
{
next = val1 + val2;
if (next % 2 == 0)
	sum = sum + next;
val1 = val2;
val2 = next;
}
printf("%d\n", sum);
return (0);
}
