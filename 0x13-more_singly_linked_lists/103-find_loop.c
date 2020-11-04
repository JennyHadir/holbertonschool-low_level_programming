#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * find_listint_loop - detect a loop in a linked list
 *@head: pointer to the first node
 * Return: the adress of the node where the loop starts or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
listint *slow_p, *fast_p;
if (head == NULL || head->next == NULL)
return (NULL);
slow_p = head->next;
fast_p = fast_p->next->next;
while (fast_p)
{
if (fast_p == slow_p)
{
slow_p = head;
return (slow_p);
}
slow_p = slow_p->next;
fast_p = fast_p->next;
}
return (NULL);
}
