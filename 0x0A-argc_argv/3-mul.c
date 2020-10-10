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
int mulp;
if (argc < 3)
{
printf("ERROR\n");
return (1);
}
mulp =  atoi(argv[2]) * atoi(argv[1]);
printf("%d\n", mulp);
return (0);
}
