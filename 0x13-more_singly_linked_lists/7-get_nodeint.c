#include "lists.h"
/**
 * get_nodeint_at_index - return the nth node of a linked list
 *@head: pointer to the first element of the list
 *@index: index of the node
 *Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *temp;
unsigned int i;
if (head == NULL)
return (NULL);
temp = head;
for (i = 0; i < index; i++)
temp = temp->next;
return (temp);
}
