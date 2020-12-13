#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint- doubly linked list printer
 * @h: pointer to the head of list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *tmp;
unsigned int numb = 0;

tmp = h;
while (tmp)
{
numb = numb + 1;
printf("%i\n", tmp->n);
tmp = tmp->next;
}
return (numb);
}
