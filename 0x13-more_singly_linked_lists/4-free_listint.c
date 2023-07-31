#include "lists.h"

/**
 * free_listint -  frees a listint_t list
 * @head: list
 */
void free_listint(listint_t *head)
{
	listint_t *pointer;

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		pointer = head;
		head = head->next;
		free(pointer);
	}
}
