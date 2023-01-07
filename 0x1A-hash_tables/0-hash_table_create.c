#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 *hash_table_create - creates a hash table.
 *@size: the size of the hash table
 *
 *Return: the hash table head
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t) * size);
	if (table->array == NULL)
		return (NULL);

	return (table);
}

/**
 *key_index - give the index of a key.
 *@key: the key
 *@size: the size
 *
 *Return: the index associate to the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int index;

	index = hash_djb2(key);

	if (index < size)
		return index;
}
