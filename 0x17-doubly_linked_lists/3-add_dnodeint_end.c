#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint_end - add node at the end of dlist
 * @head: pointer to the head of dlist
 * @n: data of node to add
 * Return: NULL if fail, adress of new node if success
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *tmp, *tmp1;
tmp1 = malloc(sizeof(dlistint_t));
if (tmp1 == NULL)
return (NULL);
tmp1->n = n;
tmp1->next = NULL;
if (*head == NULL)
{
tmp1->prev = NULL;
*head = tmp1;
}
else
{
tmp = *head;
while (tmp->next)
tmp = tmp->next;
tmp->next = tmp1;
tmp1->prev = tmp;
}
return (tmp1);
}
