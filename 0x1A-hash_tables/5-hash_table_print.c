#include "hash_tables.h"
/**
 * hash_table_print - print the hash table
 * @ht: the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int is_new = 0;
	hash_node_t *curr_node;

	if (!ht)
		return;
	printf("{");
	for (i = 0 ; i < ht->size ; i++)
	{
		curr_node = ht->array[i];
		while (curr_node)
		{
			if (is_new)
				printf(", ");
			printf("'%s': '%s'", curr_node->key, curr_node->value);
			is_new = 1;
			curr_node = curr_node->next;
		}
	}
	printf("}\n");
}
