#include "holberton.h"
#include <fcntl.h>
#include <stdlib.h>
#include "holberton.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 * append_text_to_file - append text at the end of a file
 *@filename: name of file
 *@text_content: text to appends
 *Return: 1 success -1 fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
int len = 0;
ssize_t op_fl, wr_fl;
if (filename == NULL)
return (-1);
if (text_content != NULL)
for (; text_content[len]; len++)
;
op_fl = open(filename, O_WRONLY | O_APPEND);
wr_fl = write(op_fl, text_content, len);
if (op_fl == -1 || wr_fl == -1)
return (-1);
close(op_fl);
return (1);
}
