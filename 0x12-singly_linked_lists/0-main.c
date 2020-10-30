#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
  list_t *head;
  list_t *new;
  list_t hello = {"World", 5, NULL};

  head = &hello;
  new = malloc(sizeof(list_t));
  if (new == NULL)
    {
      printf("Error\n");
      return (1);
    }
  new->str = strdup("Hello");
  new->len = 5;
  new->next = head;
  head = new;
  print_list(head);

  printf("\n");
  free(new->str);
  new->str = NULL;

  free(new);
  return (0);
}
