#include "main.h"
#include <fcntl.h>

/**
 * append_text_to_file - function that appends text
 * @filename: parameter file name
 * @text_content: parameter content added
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
int file_;
int sww;
int nletts;

if (!filename)
	return (-1);

file_ = open(filename, O_WRONLY | O_APPEND);

if (file_ == -1)
	return (-1);

if (text_content)
{
for (nletts = 0; text_content[nletts]; nletts++)
	;

sww = write(file_, text_content, nletts);

if (sww == -1)
	return (-1);
}
close(file_);

return (1);
}
