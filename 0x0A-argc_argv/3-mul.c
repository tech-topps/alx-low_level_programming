#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that multiply two numbers
 * @argc: parameter argument count
 * @argv: parameter argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
int i, j, mul = 0;

if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
i = atoi(argv[1]);
j = atoi(argv[2]);

mul = i *j;
printf("%d\n", mul);
}
return (0);
}
