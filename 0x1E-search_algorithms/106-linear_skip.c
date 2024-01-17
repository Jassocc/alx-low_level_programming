#include <stdio.h>
#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list
 * @list:  pointer to the head
 * @value: value to search for
 * Return: Pointer to the located value
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *express = NULL, *current = list;

	if (list == NULL)
	{
		return (NULL);
	}
	express = list->express;
	while (express != NULL)
	{
		printf("Value checked at index [%lu] = [%d]\n",
				express->index, express->n);
		if (express->n >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
					current->index, express->index);
			break;
		}
		current = express;
		express = express->express;
	}
	if (express == NULL)
	{
		express = current;
		while (express->next != NULL)
		{
			express = express->next;
		}
		printf("Value found between indexes [%lu] and [%lu]\n",
				current->index, express->index);
	}
	while (current != NULL && current->index <= express->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		if (current->n == value)
		{
			return (current);
		}
		current = current->next;
	}
	return (NULL);
}
