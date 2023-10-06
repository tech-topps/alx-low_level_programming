#include "main.h"
#include <fcntl.h>

/**
 * create_file - function that creates files
 * @filename: parameter filename
 * @text_content: parameter content in the file
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
int file_;
int sww;
int nletts;

if (!filename)
	return (-1);
file_ = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

if (file_ == -1)
	return (-1);

if (!text_content)
	text_content = "";


for (nletts = 0; text_content[nletts]; nletts++)
	;

sww = write(file_, text_content, nletts);

if (sww == -1)
	return (-1);
close(file_);

return (1);
}
