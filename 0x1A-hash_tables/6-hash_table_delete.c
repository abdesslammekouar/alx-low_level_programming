#include "hash_tables.h"
/**
 * hash_table_delete - delete the hash table
 * @ht: the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *curr_node, *temp_node;
	unsigned long int i;

	if (!ht)
		return;
	for (i = 0 ; i < ht->size ; i++)
	{
		curr_node = ht->array[i];
		while (curr_node)
		{
			temp_node = curr_node;
			free(curr_node->key);
			free(curr_node->value);
			free(curr_node);
			curr_node = temp_node->next;
		}
	}
	free(ht->array);
	free(ht);
}
