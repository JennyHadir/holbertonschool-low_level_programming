#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_nodeint_at_index - return the nth node of a linked list
 *@head: pointer to the first element of the list
 *@index: index of the node
 *Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *temp, *temp1;
unsigned int i, length = 0;
if (head == NULL)
return (NULL);
temp1 = head;
while (temp1)
{
length++;
temp1 = temp1->next;
}
if (index > length)
return (NULL);
temp = head;
for (i = 0; i < index && temp; i++)
temp = temp->next;
return (temp);
}
