#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * delete_nodeint_at_index - delete node at index
 *@head: pointer to the first element of a linked list
 *@index: index of the node that should be deleted
 *Return: 1 if succeeded, -1 failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i = 0;
listint_t *temp, *temp1, *temp2;
if (*head == NULL)
return (-1);
temp = *head;
if (i == index)
{
*head = temp->next;
free(temp);
return (1);
}
for (; temp && i < index - 1; i++)
temp = temp->next;
if (i == index - 1)
{
temp1 = temp->next;
temp2 = temp1->next;
free(temp1);
temp->next = temp2;
return (1);
}
else
return (-1);
}
