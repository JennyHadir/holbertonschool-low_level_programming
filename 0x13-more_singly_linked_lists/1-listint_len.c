#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list
 *@h: pointer to the head of the list
 *Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
const listint_t *temp;
int nodes = 0;
temp = h;
while (temp)
{
nodes++;
temp = temp->next;
}
return (nodes);
}
