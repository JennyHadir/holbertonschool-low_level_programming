#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - delete a node from dlist at a specific position
 * @head: pointer to the first node
 * @index: position of node to delete
 * Return: 1 success, -1 fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int counter = 0;
dlistint_t *tmp;
if (*head == NULL)
return (-1);
tmp = *head;
for (; tmp && counter < index; counter++)
tmp = tmp->next;
if (counter == index)
{
if ((*head)->next == NULL)
{
*head = NULL;
free(tmp);
return (1);
}
if (tmp == (*head))
{
(*head) = (*head)->next;
(*head)->prev = NULL;
free(tmp);
return (1);
}
if (tmp->next == NULL)
{
tmp->prev->next = NULL;
free(tmp);
return (1);
}
tmp->prev->next = NULL;
tmp->prev->next = tmp->next;
free(tmp);
return (1);
}
return (-1);
}
