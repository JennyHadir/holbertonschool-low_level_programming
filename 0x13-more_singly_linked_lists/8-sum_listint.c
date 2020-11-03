#include "lists.h"
/**
 * sum_listint -return the sum of all the data n of a linked list
 *@head: pointer to the first element of a list
 *Return: sum of all data
 */
int sum_listint(listint_t *head)
{
listint_t *temp;
int sum = 0;
temp = head;
while (temp)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}
