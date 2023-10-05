#include "hash_tables.h"

/**
 * shash_table_create - creates hash table
 * @size: array
 * Return: pointer
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_t;
	unsigned long int a;

	if (size == 0)
	{
		return (NULL);
	}
	new_t = malloc(sizeof(shash_table_t));
	if (new_t == NULL)
	{
		return (NULL);
	}
	new_t->array = malloc(sizeof(shash_node_t *) * size);
	if (new_t->array == NULL)
	{
		free(new_t);
		return (NULL);
	}
	new_t->size = size;
	new_t->shead = NULL;
	new_t->stail = NULL;
	for (a = 0; a < size; a++)
	{
		new_t->array[a] = NULL;
	}
	return (new_t);
}
/**
 * shash_table_set - inserts a value
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_n, *curr;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	curr = ht->array[index];
	while (curr != NULL)
	{
		if (strcmp(curr->key, key) == 0)
		{	free(curr->value), curr->value = strdup(value);
			return (1); }
		curr = curr->next;
	} new_n = malloc(sizeof(shash_node_t));
	if (new_n == NULL)
		return (0);
	new_n->key = strdup(key), new_n->value = strdup(value);
	if (new_n->key == NULL || new_n->value == NULL)
	{	free(new_n->key), free(new_n->value), free(new_n);
		return (0);
	} new_n->next = ht->array[index], ht->array[index] = new_n;
	if (ht->shead == NULL || strcmp(key, ht->shead->key) < 0)
	{	new_n->snext = ht->shead, new_n->sprev = NULL;
		if (ht->shead != NULL)
			ht->shead->sprev = new_n;
		else
		{	ht->stail = new_n;
		} ht->shead = new_n;
	}
	else
	{	curr = ht->shead;
		while (curr->snext != NULL && strcmp(key, curr->snext->key) > 0)
		{	curr = curr->snext;
		} new_n->snext = curr->snext, new_n->sprev = curr;
		if (curr->snext != NULL)
			curr->snext->sprev = new_n;
		else
		{	ht->stail = new_n;
		} curr->snext = new_n;
	} return (1);
}
/**
 * shash_table_get - retrieves value
 * @ht: hash table
 * @key: key
 * Return: value of key
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *curr;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);
	curr = ht->array[index];
	while (curr != NULL)
	{
		if (strcmp(curr->key, key) == 0)
		{
			return (curr->value);
		}
		curr = curr->next;
	}
	return (NULL);
}
/**
 * shash_table_print - prints hash table
 * @ht: hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;
	int fl;

	fl = 0;
	if (ht == NULL)
	{
		return;
	}
	node = ht->shead;
	printf("{");
	while (node != NULL)
	{
		if (fl == 1)
		{
			printf(", ");
		}
		printf("'%s': '%s'", node->key, node->value);
		fl = 1;
		node = node->snext;
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - print in reverse
 * @ht: hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;
	int fl;

	fl = 0;
	if (ht == NULL)
	{
		return;
	}
	node = ht->stail;
	printf("{");
	while (node != NULL)
	{
		if (fl == 1)
		{
			printf(", ");
		}
		printf("'%s': '%s'", node->key, node->value);
		fl = 1;
		node = node->sprev;
	}
	printf("}\n");
}
/**
 * shash_table_delete - delete hash table
 * @ht: hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *curr_n, *temp;
	unsigned long int a;

	if (ht == NULL)
	{
		return;
	}
	for (a = 0; a < ht->size; a++)
	{
		curr_n = ht->array[a];
		while (curr_n != NULL)
		{
			temp = curr_n->next;
			free(curr_n->key);
			free(curr_n->value);
			free(curr_n);
			curr_n = temp;
		}
	}
	free(ht->array);
	free(ht);
}
