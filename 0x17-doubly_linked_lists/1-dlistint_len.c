#include "lists.h"

/**
 * dlistint_len - return len of a list
 * @h: pointer
 * Return: length
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *cur = h;
	size_t coun = 0;

	while (cur)
	{
		cur = cur->next;
		coun = coun + 1;
	}
	return (coun);
}
