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
int cents, change = 0;
if (argc != 2)
{
printf("ERROR\n");
return (1); }
cents = atoi(argv[1]);
if (cents < 1)
printf("%d\n", 0);
while (cents != 0)
{
if (cents >= 25)
{change += cents / 25;
cents %= 25; }
else if (cents >= 10)
{change += cents / 10;
cents %= 10; }
else if (cents >= 5)
{change += cents / 5;
cents %= 5; }
else if (cents >= 2)
{change += cents / 2;
cents %= 2; }
else
{change++;
cents = 0; }
}
printf("%d\n", change);
return (0);
}
