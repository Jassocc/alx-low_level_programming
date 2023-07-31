#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: list
 * Return:  sum of all the data (n)
 */
int sum_listint(listint_t *head)
{
	int a;

	a = 0;
	while (head != NULL)
	{
		a = a + head->n;
		head = head->next;
	}
	return (a);
}
