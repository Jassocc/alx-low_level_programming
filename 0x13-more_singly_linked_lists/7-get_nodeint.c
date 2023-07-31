#include "lists.h"

/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list
 * @head: pointer to list
 * @index: n
 * Return: n
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;

	if (head == NULL)
	{
		return (NULL);
	}
	for (a = 0; (a < index) && head != NULL; a++)
	{
		head = head->next;
	}
	if (a == index)
	{
		return (head);
	}
	return (NULL);
}
