#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: list
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node = 0;
	const listint_t *temp = head;
	const listint_t *loop_node = NULL;

	while (temp)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		node++;
		if (temp == loop_node)
		{
			printf("-> [%p] %d\n", (void *)temp, temp->n);
			break;
		}
		temp = temp->next;
		if (node % 2 == 0 && temp != NULL)
		{
			if (temp == loop_node)
			{
				printf("-> [%p] %d\n", (void *)temp, temp->n);
				break;
			}
			loop_node = loop_node ? loop_node->next : head;
		}
	}
	return (node);
}
