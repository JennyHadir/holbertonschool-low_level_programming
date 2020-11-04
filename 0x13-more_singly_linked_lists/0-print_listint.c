#include "lists.h"
/**
 * print_listint - print all elements of a list
 *@h: head of the list
 *Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
const listint_t *temp;
int nodes = 0;
temp = h;
while (temp)
{
printf("%d\n", temp->n);
temp = temp->next;
nodes++;
}
return (nodes);
}
