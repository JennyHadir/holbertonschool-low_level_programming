#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * reverse_listint - reverse a linked list list
 *@head: pointer to the first element of a list
 *Return: a pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev, *next;
if ((*head)->next == NULL)
return (*head);
prev = NULL;
while (*head)
{
next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;
}
*head = prev;
return (*head);
return (NULL);
}
