#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 * @head: pointer to starts
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int s = 0;
	dlistint_t *start = head;

	if (!start)
	{
		return (s);
	}
	while (start != NULL)
	{
		s = s + start->n;
		start = start->next;
	}
	return (s);
}
