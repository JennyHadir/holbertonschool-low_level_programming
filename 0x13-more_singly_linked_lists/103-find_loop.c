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
listint_t *slow_p, *fast_p;
if (head == NULL || head->next == NULL)
return (NULL);
slow_p = head;
fast_p = head;
while (slow_p && fast_p && fast_p->next)
{ 
slow_p = slow_p->next; 
fast_p = fast_p->next->next; 
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
