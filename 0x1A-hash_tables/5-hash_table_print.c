#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: the hash table
 * Return: Nothing, just print inside
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, count, count2, size;
	char *key, *value;
	hash_node_t *tmp;

	if (ht == NULL)
		return;
	size = ht->size;
	count = count2 = 0;
	count = count_nodes(ht);
	printf("{");
	for (i = 0; i < size; i++)
	{
		if (ht->array[i] != NULL)
		{
			tmp = ht->array[i];
			if (tmp->next != NULL)
			{
				count++;
				while (tmp != NULL)
				{
					count2++, key = tmp->key, value = tmp->value;
					if (count2 != count)
						printf("'%s': '%s', ", key, value);
					else
						printf("'%s': '%s'", key, value);
					tmp = tmp->next;
				}
			}
			else
			{
				key = tmp->key, value = tmp->value;
				if (count2 != count - 1)
					printf("'%s': '%s', ", key, value);
				else
					printf("'%s': '%s'", key, value);
				count2++;
			}
		}
	}
	printf("}\n");
}

/**
 * count_nodes - counts the number of nodes
 * @ht: hash table
 * Return: count
 */
unsigned long int count_nodes(const hash_table_t *ht)
{
	unsigned long int i, count;
	hash_node_t *temp;

	count = 0;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			temp = ht->array[i];
			if (temp->next != NULL)
			{
				while (temp != NULL)
					temp = temp->next;
			}
			count++;
		}
	}
	return (count);
}
