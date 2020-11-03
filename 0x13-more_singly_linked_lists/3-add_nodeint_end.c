#include "lists.h"
/**
 * add_nodeint_end - add new node at the end of a list
 *@head: pointer to the first element of the list
 *@n: element to add
 *Return: adress of new element or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *temp, *temp1;
temp = malloc(sizeof(listint_t));
if (temp == NULL)
return (NULL);
temp->n = n;
if (*head == NULL)
{
*head = temp;
return (temp);
}
temp1 = *head;
while (temp1->next)
temp1 = temp1->next;
temp1->next = temp;
return (temp);
}
