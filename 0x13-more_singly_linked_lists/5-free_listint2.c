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
listint_t *temp, *temp1;
temp = *head;
while (temp)
{
temp1 = temp->next;
free(temp);
temp = temp1;
}
*head = NULL;
}
