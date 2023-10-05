#include "hash_tables.h"

/**
 * hash_table_create - creates hash ttable
 * @size: size of table
 * Return: pointer
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_t;
	unsigned long int a;

	if (size == 0)
	{
		return (NULL);
	}
	new_t = malloc(sizeof(hash_table_t));
	if (new_t == 0)
	{
		return (NULL);
	}
	new_t->array = malloc(sizeof(hash_node_t *) * size);
	if (new_t->array == NULL)
	{
		free(new_t);
		return (NULL);
	}
	new_t->size = size;
	for (a = 0; a < size; a++)
	{
		new_t->array[a] = NULL;
	}
	return (new_t);
}
