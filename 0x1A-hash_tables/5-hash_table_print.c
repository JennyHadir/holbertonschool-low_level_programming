#include "hash_tables.h"
/**
 * hash_table_print - hash table printer
 * @ht: Hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int r = 0;

	if (!ht)
		return;
	printf("{");

	for (i = 0; i < ht->size; i++)
		if (ht->array[i] != NULL)
		{
			if (r == 1)
				printf(", ");

			node = ht->array[i];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			r = 1;
		}
	printf("}\n");
}
