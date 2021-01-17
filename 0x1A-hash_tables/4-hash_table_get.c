#include "hash_tables.h"
/**
 * hash_table_get - Gets an element in table
 * @ht: Hash table
 * @key: Key
 * Return: Pointer to value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *node;

	if (!ht || !key)
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	if (i >= ht->size)
		return (NULL);

	node = ht->array[i];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	if (node && strcmp(node->key, key) == 0)
		return (node->value);
	return (NULL);
}
