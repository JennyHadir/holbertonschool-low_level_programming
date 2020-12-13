#include "lists.h"
#include <stdio.h>
/**
 * sum_dlistint - returns the sum of all data of a dlistint
 * @head: pointer to the first node
 * Return: 0 if the list is empty, sum otherwise
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;

while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
