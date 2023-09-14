#include "lists.h"

/**
 * print_dlistint -  prints all the elements of a dlistint_t
 * @h: pointer
 * Return: elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *cur = h;
	size_t c = 0;

	while (cur)
	{
		printf("%d\n", cur->n);
		cur = cur->next;
		c = c + 1;
	}
	return (c);
}
