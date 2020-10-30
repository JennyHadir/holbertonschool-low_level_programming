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
unsigned int numb = 0;
temp = h;
while (temp)
{
if (temp->str == NULL)
printf("[%u] %s\n", 0, "(nil)");
else
printf("[%u] %s\n", temp->len, temp->str);
numb++;
temp = temp->next;
}
return (numb);
}
