#include "hash_tables.h"
/**
 * hash_table_create - prints any string in Reverse.
 * @size: is the size of the array
 * Return: Hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	if (size < 1)
	{
		return (NULL);
	}

	ht = malloc(sizeof(hash_table_t));

	if (ht == NULL)
	{
		return (NULL);
	}

	ht->size = size;

	ht->array = malloc(sizeof(hash_node_t));

	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	return (ht);
}
