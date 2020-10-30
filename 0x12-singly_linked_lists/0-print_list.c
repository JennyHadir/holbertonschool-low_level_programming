#include "lists.h"
#include <stdio.h>
/**
 * print_list - list printer function
 *@h: linked list
 *Return: number of nodes
 */
size_t print_list(const list_t *h)
{
const list_t *lk;
unsigned int numb = 0;
lk = h;
while(lk)
{
if (lk->str == NULL)
printf("[%u] (nil)\n", 0);
else
printf("[%u] %s\n", lk->len, lk->str);
numb++;
lk = lk->next;
}
return (numb);
}
