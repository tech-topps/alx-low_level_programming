#include <stdio.h>

/**
 * main - function that prints all argument
 * @argc: parameter argument count
 * @argv: parameter argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
int a;

for (a = 0 ; a < argc ; a++)
	printf("%s\n", argv[a]);
return (0);
}
