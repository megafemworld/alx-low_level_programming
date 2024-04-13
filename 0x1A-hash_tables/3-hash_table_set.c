#include "hash_tables.h"

/**
 * hash_table_set - Add an element to the hash table.
 * @ht: The hash table to add/update the key/update in.
 * @key: The key (string) to add.
 * @value: The value associated with the key.
 *
 * Return: 1 if successfully, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current;

	if (!ht || !key || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (cuurent)
	{
		if (strcmp(current-key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if(!new_node)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
