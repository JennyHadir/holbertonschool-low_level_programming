#include <stdio.h>
/**
 * main - main function
 *
 * @argv: array of argc
 * @argc: number of argument
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char **argv)
{
if (argc > 0)
{
printf("%d\n", argc - 1);
}
return (0);
}
