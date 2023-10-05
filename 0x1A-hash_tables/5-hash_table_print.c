#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int a;
	hash_node_t *node;
	int fl;

	fl = 0;
	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (a = 0; a < ht->size; a++)
	{
		node = ht->array[a];
		while (node != NULL)
		{
			if (fl == 1)
			{
				printf(", ");
			}
			printf("'%s': '%s'", node->key, node->value);
			fl = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
