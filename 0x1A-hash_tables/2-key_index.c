#include "hash_tables.h"
/**
 * key_index - Creates an index key
 * @key: key
 * @size: Array size
 * Return: Index key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
