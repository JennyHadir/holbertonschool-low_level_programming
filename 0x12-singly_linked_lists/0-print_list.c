#include "lists.h"
#include <stdlib.h>
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
while (temp)
{
if (temp->str == NULL)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", temp->len, temp->str);
temp = temp->next;
numb++;
}
return (numb);
}
