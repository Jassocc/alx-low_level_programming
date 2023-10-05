#include "hash_tables.h"

/**
 * hash_table_create - creates hash ttable
 * @size: size of table
 * Return: pointer
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_t;
	hash_node_t **arr;
	unsigned long int a = 0;

	if (size == 0)
	{
		return (NULL);
	}
	new_t = malloc(sizeof(hash_table_t));
	if (!new_t)
	{
		return (NULL);
	}
	arr = malloc(sizeof(*arr) * size);
	if (!arr)
	{
		free(new_t);
		return (NULL);
	}
	while (a < size)
	{
		arr[a] = NULL;
		a++;
	}
	new_t->size = size;
	new_t->array = arr;
	return (new_t);
}
