#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a list function
 *@head: pointer to the head of the list
 *Return: void
 */
void free_list(list_t *head)
{
list_t *temp, *temp1;
temp = head;
while (temp)
{
temp1 = temp->next;
free(temp->str);
free(temp);
temp = temp1;
}
}
