#include "lists.h"
/**
 * list_len - find the length of a list function
 *@h: pointer to linked list
 * Return: number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
const list_t *lk;
unsigned int ln = 0;
lk = h;
while (lk)
{
lk = lk->next;
ln++;
}
return (ln);
}
