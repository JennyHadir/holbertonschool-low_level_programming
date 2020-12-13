#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_dnodeint_at_index - return a node at specific index
 * @head: pointer to the head of a dlist
 * @index: place of node
 * Return: the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i;
for (i = 0; head; i++)
{
if (i != index)
head = head->next;
else
break;
}
if (head == NULL)
return (NULL);
return (head);
}
