#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: list
 * Return: address of node where the loop starts, or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *a, *b;

	a = b = head;
	while (a != NULL && b != NULL)
	{
		a = a->next;
		b = b->next->next;
		if (a == b)
		{
			a = head;
			while (a != b)
			{
				a = a->next;
				b = b->next;
			}
			return (a);
		}
	}
	return (NULL);
}
