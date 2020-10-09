#include <stdio.h>
/**
 * main - main function
 *
 * @argv: array of argument
 * @argc: size of array
 * Return: 0
 */
int main(__attribute__ ((unused)) int argc, char **argv)
{
while (*argv)
{
printf("%s\n", *argv);
argv++;
}
return (0);
}
