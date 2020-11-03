#include "lists.h"
/**
 * add_nodeint - add a new node at the beginning of a list
 *@head: pointer to the head of the list
 *@n: node to add
 *Return: adress of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *temp;
temp = malloc(sizeof(listint_t));
if (temp == NULL)
return (NULL);
temp->n = n;
temp->next = *head;
*head = temp;
return (*head);
}
