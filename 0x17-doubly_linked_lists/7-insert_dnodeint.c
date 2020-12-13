#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - insert a node at a given position
 * @h: pointer to the first node
 * @idx: position where to insert a node
 * @n: data of node to insert
 * Return: adress of new node in success, NULL otherwise
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *tmp, *tmp1;
unsigned int count;

if (idx == 0)
return (add_dnodeint(h, n));
if (idx != 0 && *h == NULL)
return (NULL);
tmp = *h;
tmp1 = malloc(sizeof(dlistint_t));
if (tmp1 == NULL)
return (NULL);
tmp1->n = n;
for (count = 0; tmp->next; count++)
{
if (count + 1 == idx)
{
tmp1->next = tmp->next;
tmp->next = tmp1;
tmp1->prev = tmp;
tmp->next->prev = tmp1;
return (tmp1);
}
tmp = tmp->next;
}
if (count + 1 == idx)
{
free(tmp1);
return(add_dnodeint_end(h, n));
}
free(tmp1);
return (NULL);
}
