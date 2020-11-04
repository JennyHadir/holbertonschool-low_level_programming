#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint - frees a list
 *@head: pointer to the first element of a list
 *Return: void
 */
void free_listint(listint_t *head)
{
listint_t *temp, *temp1;
temp = head;
while (temp)
{
temp1 = temp->next;
free(temp);
temp = temp1;
}
}
