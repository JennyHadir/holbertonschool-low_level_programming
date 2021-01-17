#include "hash_tables.h"
/**
 * shash_table_create - Creates a hash table.
 * @size: Hash table size.
 * Return: Node
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (!ht->array)
		return (NULL);
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;
	return (ht);
}
/**
 * shash_table_set - Adds an element in hash list
 * @ht: Hash table
 * @key: Key
 * @value: value of key
 * Return: 1 Success, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	char *cp;
	shash_node_t *new, *node;

	if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0)
		return (0);
	cp = strdup(value);
	if (!cp)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	node = ht->shead;
	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = cp;
			return (1);
		}
		node = node->snext;
	}
	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
		return (free(cp), 0);
	new->key = strdup(key);
	if (new->key == NULL)
		return (free(cp), free(new), 0);
	new->value = cp;
	new->next = ht->array[i];
	ht->array[i] = new;
	organize_ht(ht, new, key);
	return (1);
}

/**
 * organize_ht - Gets an element in hast table
 * @ht: Hash table
 * @new: Node in hash table
 * @key: Key
 * Return: 1 Success, 0 Fail
 */
void organize_ht(shash_table_t *ht, shash_node_t *new, const char *key)
{
	shash_node_t *aux;

	if (ht->shead == NULL)
	{
		new->sprev = NULL;
		new->snext = NULL;
		ht->shead = new;
		ht->stail = new;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new->sprev = NULL;
		new->snext = ht->shead;
		ht->shead->sprev = new;
		ht->shead = new;
	}
	else
	{
		aux = ht->shead;
		while (aux->snext != NULL && strcmp(aux->snext->key, key) < 0)
			aux = aux->snext;
		new->sprev = aux;
		new->snext = aux->snext;
		if (aux->snext == NULL)
			ht->stail = new;
		else
			aux->snext->sprev = new;
		aux->snext = new;
	}
}


/**
 * shash_table_get - Gets an element in hast table
 * @ht: Hash table
 * @key: Key
 * Return: Pointer to value, NULL if failed
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int i;
	shash_node_t *aux;

	if (!ht || !key)
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	if (i >= ht->size)
		return (NULL);

	aux = ht->shead;
	while (aux && strcmp(aux->key, key) != 0)
		aux = aux->snext;

	if (aux && strcmp(aux->key, key) == 0)
		return (aux->value);

	return (NULL);
}

/**
 * shash_table_print - Prints a hash table
 * @ht: Hash table
 * Return: None
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *aux;

	if (!ht)
		return;

	aux = ht->shead;
	printf("{");
	while (aux != NULL)
	{
		printf("'%s': '%s'", aux->key, aux->value);
		aux = aux->snext;
		if (aux != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a hash table in reverse
 * @ht: Hash table
 * Return: None
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *aux;

	if (!ht)
		return;

	aux = ht->stail;
	printf("{");
	while (aux != NULL)
	{
		printf("'%s': '%s'", aux->key, aux->value);
		aux = aux->sprev;
		if (aux != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Free a hash table
 * @ht: Hash table
 * Return: None
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *h = ht;
	shash_node_t *del, *aux;

	if (!h)
		return;

	del = ht->shead;
	while (del)
	{
		aux = del->snext;
		free(del->key);
		free(del->value);
		free(del);
		del = aux;
	}
	free(h->array);
	free(ht);
}