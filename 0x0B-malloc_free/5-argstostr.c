#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - concatenate all the given arguments separated by \n
 * @ac: number of arguments
 * @av: arguments vector
 *
 * Return: pointer to a new string or NULL on failure
 */

char *argstostr(int ac, char **av)
{
char *s;
int size = 0, i, j, k;

if (!ac || !av)
{
return (0);
}
for (i = 0; i < ac; i++)
{
j = 0;
while (av[i][j++])
{
size++;
}
size++;
}
s = (char *)malloc(sizeof(char) * ++size);
if (!s)
{
return (0);
}
for (i = 0, k = 0; i < ac; i++)
{
j = 0;
while (av[i][j])
{
s[k++] = av[i][j++];
}
s[k++] = '\n';
}
s[k] = '\0';
return (s);
}
