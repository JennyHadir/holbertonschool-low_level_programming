#include "lists.h"
#include <stdlib.h>
/**
 * add_node_end - add a new node at the end of a list function
 *@head: pointer to the head of the list
 *@str: string to add
 *Return: adress of new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
  list_t *lk, *temp;
unsigned int ln = 0;
if (str == NULL)
return (NULL);
lk = malloc(sizeof(list_t));
if (lk == NULL)
return (NULL);
lk->str = strdup(str);
while (str[ln])
ln++;
lk->len = ln;
lk->next = NULL;
if (*head == NULL)
{
*head = lk;
return (lk);
}
temp = *head;
while(temp->next)
temp = temp->next;
temp->next = lk;
return (lk);
}
