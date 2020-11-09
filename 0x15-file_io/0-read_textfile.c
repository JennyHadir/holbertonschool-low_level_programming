#include "holberton.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX
 *@filename: file to read and print
 *@letters: number of letters to read and print
 *Return: 0 fail or number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *fl;
int op_fl;
ssize_t rd_fl, wr_fl;
if (filename == NULL)
return (0);
fl = malloc(sizeof(char) * letters);
if (fl == NULL)
{
free(fl);
return (0);
}
op_fl = open(filename, O_RDONLY);
if (op_fl == -1)
{
free(fl);
return (0);
}
rd_fl = read(op_fl, fl, letters);
if (rd_fl == -1)
{
free(fl);
return (0);
}
wr_fl = write(STDOUT_FILENO, fl, rd_fl);
free(fl);
close(op_fl);
if (wr_fl != rd_fl)
return (0);
return (wr_fl);
}
