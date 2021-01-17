#include "hash_tables.h"
/**
 * hash_table_delete - Free a hash table
 * @ht: Hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *h = ht;
	hash_node_t *supp, *node;
	unsigned long int i;

	for (i = 0; i < h->size; i++)
		if (h->array[i] != NULL)
		{
			supp = h->array[i];
			while (supp != NULL)
			{
				node = supp->next;
				free(supp->key);
				free(supp->value);
				free(supp);
				supp = node;
			}
		}
	free(ht->array);
	free(ht);
}
