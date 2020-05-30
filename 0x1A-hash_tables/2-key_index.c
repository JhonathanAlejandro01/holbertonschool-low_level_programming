#include "hash_tables.h"
/**
 * key_index - get the index.
 * @key: the key of the list
 * @size: is the size of the list
 * Return: Hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
