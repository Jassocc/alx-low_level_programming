#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list -  searches for a value in a sorted list of integers
 * @list: pointer to the head of the list
 * @size: number of nodes in list
 * @value: value to search for
 * Return:  pointer to the first node where value is located
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump, step;
	listint_t *current, *prev;

	if (list == NULL || size == 0)
	{
		return (NULL);
	}
	jump = sqrt(size);
	current = list;
	prev = NULL;
	while (current && current->n < value)
	{
		prev = current;
		step = jump;
		while (step > 0 && current->next)
		{ current = current->next;
			step--;
		}
		if (step > 0)
		{ break;
		}
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
			prev->index, current->index);
	while (prev && prev->index < current->index)
	{ printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
		{ return (prev);
		}
		prev = prev->next;
	}
	if (prev && prev->index == size - 1)
	{ printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
	} return (NULL);
}
