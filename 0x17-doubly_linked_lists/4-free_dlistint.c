#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dlistint - free a dlist
 * @head: pointer to the head of dlist
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *tmp;
while (tmp)
tmp = head;
head = head->next;
free(tmp);
}
