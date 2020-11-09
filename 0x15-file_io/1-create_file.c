#include "holberton.h"
#include <fcntl.h>
#include <stdlib.h>
#include "holberton.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 * create_file - create a file function
 *@filename : name of the file to create
 *@text_content: content of the file to create
 *Return: 1 success, -1 fail
 */
int create_file(const char *filename, char *text_content)
{
int len = 0;
ssize_t op_fl, wr_fl;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (; text_content[len]; len++)
;
}
op_fl = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
wr_fl = write(op_fl, text_content, len);
if (op_fl == -1 || wr_fl == -1)
return (-1);
close(op_fl);
return (1);
}
