#include "hash_tables.h"

/**
 * hash_table_create - create a hash table and return a pointer to it
 * @size: size of the hash table
 * Return: a pointer to the hash table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht1;

	ht1 = malloc(sizeof(hash_table_t));
	if (!ht1)
		return (NULL);
	ht1->array = malloc(sizeof(hash_node_t *) * size);
	if (!ht1->array)
	{
		free(ht1);
		return (NULL);
	}
	ht1->size = size;
	return (ht1);
}
