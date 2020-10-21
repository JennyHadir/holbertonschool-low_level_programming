#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the opcodes of main function
 * @argc: arguments count
 * @argv: number of bytes to print
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
char *f = (char *)&main;
int i, x;

if (argc != 2)
{
printf("Error\n");
exit(1);
}
x = atoi(argv[1]);
if (x < 0)
{
printf("Error\n");
exit(2);
}
for (i = 0; i < x; i++)
{
printf("%02hhx", f[i]);
if (i < x - 1)
printf(" ");
}
printf("\n");
return (0);
}
