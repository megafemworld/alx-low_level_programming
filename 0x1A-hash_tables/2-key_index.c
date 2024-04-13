#include "hash_tables.h"

/**
 * key_index - Computes the index for a given key.
 * @key: The key (string) for which to compute the index.
 * @size: The size of the hash table array.
 *
 * Return: The index where teh key/value pair should be stored.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	hash_value = hash_djb2(key);

	return (has_value % size);

}
