#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht:  hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int a;
	hash_node_t *curr_node, *tmp;

	if (ht == NULL)
	{
		return;
	}
	for (a = 0; a < ht->size; a++)
	{
		curr_node = ht->array[a];
		while (curr_node != NULL)
		{
			tmp = curr_node->next;
			free(curr_node->key);
			free(curr_node->value);
			free(curr_node);
			curr_node = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
