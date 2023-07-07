#include "hash_tables.h"
hash_node_t *create_node(const char *key, const char *value);
/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table
 * @key: the key of the node
 * @value: value of the node
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *curr_node;
	int idx;

	if (!ht || !key || *key == '\0' || !value)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	if (ht->array[idx] == NULL)
	{
		node = create_node(key, value);
		if (!node)
			return (0);
		ht->array[idx] = node;
		return (1);
	}
	else
	{
		curr_node = ht->array[idx];
		while (curr_node)
		{
			if (strcmp(curr_node->key, key) == 0)
			{
				free(curr_node->value);
				curr_node->value = strdup(value);
				return (1);
			}
			curr_node = curr_node->next;
		}
		/*cur_node = ht->array[index];*/
		node = create_node(key, value);
		if (!node)
			return (0);
		node->next = ht->array[idx];
		ht->array[idx] = node;
		return (1);
	}

}
/**
 * create_node - creating new node
 * @key: key of the new node
 * @value: value of the new node
 * Return: new node or NULL
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (!node)
		return (NULL);
	node->key = strdup(key);
	if (!(node->key))
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (!(node->value))
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node->next = NULL;
	return (node);
}
