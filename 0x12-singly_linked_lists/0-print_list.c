#include "lists.h"
#include <stdio.h>
/**
 * print_list - list printer function
 *@h: linked list
 *Return: number of nodes
 */
size_t print_list(const list_t *h)
{
const list_t *temp;
unsigned int i, numb = 0;
temp = h;
for (i = 0; temp; i++)
{
if (temp->str == NULL)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", temp->len, temp->str);
numb++;
temp = temp->next;
}
return (numb);
}
