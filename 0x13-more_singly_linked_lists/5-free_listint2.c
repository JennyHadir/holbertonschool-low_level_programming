#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint2 - frees list
 *@head: pointer to the head of the list
 *Return: void
 */
void free_listint2(listint_t **head)
{
listint_t *temp;
if (head == NULL || *head == NULL)
return;
while (*head)
{
temp = *head;
*head = (*head)->next;
free(temp);
}
*head = NULL;
}
