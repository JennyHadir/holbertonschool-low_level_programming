#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - main function
 *
 * @argv
 * @argc
 * Return: 1 if fail 0 if succes
 */
int main(int argc, char **argv)
{
int sum = 0, i = 1;
while (argc > i)
{
if (isalpha(*argv[i]) == 0)
{
sum += atoi(argv[i]);
i++;
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", sum);
return (0);
}
