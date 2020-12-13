#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len- doubly linked list length counter
 * @h: pointer to the head of list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *tmp;
unsigned int numb = 0;

tmp = h;
while (tmp)
{
numb = numb + 1;
tmp = tmp->next;
}
return (numb);
}
