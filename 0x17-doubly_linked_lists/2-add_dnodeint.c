#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* add_dnodeint - add node at the beginning of a dlist
*@head: pointer to the head of a list
*@n: content of node to add
*Return: NULL if fail, adress of new head if succes
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *tmp;
tmp = malloc(sizeof(dlistint_t));
if (tmp == NULL)
return (NULL);
tmp->n = n;
tmp->prev = NULL;
if (*head == NULL)
{
tmp->next = NULL;
*head = tmp;
}
else
{
tmp->next = *head;
(*head)->prev = tmp;
*head = tmp;
}
return (tmp);
}
