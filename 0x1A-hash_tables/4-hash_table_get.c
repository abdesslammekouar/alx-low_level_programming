#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: the hash table.
 * @key: the key.
 *
 * Return:
 *	the value associated with the element,
 *	or NULL if key couldn’t be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *curr_node;
	unsigned long int idx;

	if (!ht || !key)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	curr_node = ht->array[idx];
	while (curr_node && strcmp(curr_node->key, key))
		curr_node = curr_node->next;
	return (curr_node ? curr_node->value : NULL);
}
