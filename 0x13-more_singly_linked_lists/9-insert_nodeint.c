#include "lists.h"
/**
 * insert_nodeint_at_index - insert a new node at a given position
 *@head: pointer to the first element of the list
 *@idx: where the new node should be added
 *@n: element to add
 *Return: adress of new node, NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i = 0;
listint_t *temp, *temp1, *temp2;
temp = malloc(sizeof(listint_t));
if (temp == NULL)
return (NULL);
temp->n = n;
if (head == NULL && i == idx)
{
*head = temp;
return (temp);
}
temp1 = *head;
for (; temp1 && i < idx - 1; i++)
temp1 = temp1->next;
if (i == idx - 1)
{
temp2 = temp1->next;
temp1->next = temp;
temp->next = temp2;
return (temp);
}
else
return (NULL);
}
