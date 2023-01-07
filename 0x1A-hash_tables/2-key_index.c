#include <stdlib.h>
#include "hash_tables.h"

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
	return (index % size);
}
