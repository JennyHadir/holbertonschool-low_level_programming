#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pop_listint - delete the head node
 *@head: pointer to the first node of the list
 *Return: head node's data
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int node;
temp = *head;
if (temp == NULL)
return (0);
*head = temp->next;
node = temp->n;
free(temp);
return (node);
}
