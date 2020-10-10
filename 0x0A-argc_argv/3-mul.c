#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 *
 * @argv: array of argument
 * @argc: size of array
 * Return: 0
 */
int main(int argc, char **argv)
{
if (argc < 3)
{
printf("ERROR\n");
return (1);
}
else
{
printf("%d\n", atoi(argv[2]) * atoi(argv[1]));
return (0);
}
}
