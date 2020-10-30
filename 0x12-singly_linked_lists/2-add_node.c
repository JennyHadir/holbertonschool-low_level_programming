#include "lists.h"
#include <stdlib.h>
/**
 * add_node - add a node at the beginning of a list function
 *@head: adress of node
 *@str: content of a node
 *Return: address of new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *lk;
unsigned int ln = 0;
lk = malloc(sizeof(list_t));
if (lk == NULL)
return (NULL);
while (str[ln])
ln++;
lk->str = strdup(str);
lk->len = ln;
lk->next = *head;
*head = lk;
return (*head);
}
