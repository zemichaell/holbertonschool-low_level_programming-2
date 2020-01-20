#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: the hash table you want to look into
 * @key: is the key you are looking for
 * Return: value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int size, index;

	size = ht->size;
	index = key_index((const unsigned char *)key, size);
	if (strcmp(ht->array[index]->key, key) == 0)
		return (ht->array[index]->value);
	return (NULL);
}
