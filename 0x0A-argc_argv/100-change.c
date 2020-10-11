#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 *
 * @argv: array of arguments
 * @argc: size of array
 * Return: 0 succes or 1 fail
 */
int main(int argc, char **argv)
{
int cents, i, change = 0;
int bills[] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1); }
cents = atoi(argv[1]);
if (cents < 1)
printf("%d\n", 0);
if (cents != 0)
{
for (i = 0; i < 5; i++)
{
change += cents / bills[i];
cents %= bills[i];
}
}
printf("%d\n", change);
return (0);
}
