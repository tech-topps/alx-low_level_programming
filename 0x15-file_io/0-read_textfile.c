#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - function that reads text file and print it
 * @filename: parameter file to read
 * @letters: parameter letters to print and read
 * Return: number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fdil;
ssize_t senr, senw;
char *buf;

if (filename == NULL)
	return (0);
fdil = open(filename, O_RDONLY);
if (fdil == -1)
	return (0);
buf = malloc(sizeof(char) * letters);
if (buf == NULL)
{
close(fdil);
return (0);
}
senr = read(fdil, buf, letters);
close(fdil);
if (senr == -1)
{
free(buf);
return (0);
}
senw = write(STDOUT_FILENO, buf, senr);
free(buf);
if (senr != senw)
	return (0);
return (senw);
}
