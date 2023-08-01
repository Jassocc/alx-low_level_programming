#include "lists.h"

/**
 * node_count - counts nodes
 * @head: pointer
 * Return: count
 */
int node_count(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t n = 1;

	if (head == NULL || head->next == NULL)
	{
		return (0);
	}
	slow = head->next;
	fast = (head->next)->next;
	while (fast)
	{
		if (slow == fast)
		{
			slow = fast;
			while (slow != fast)
			{
				n++;
				slow = slow->next;
				fast = fast->next;
			}
			slow = slow->next;
			while (slow != fast)
			{
				n++;
				slow = slow->next;
			}
			return (n);
		}
		slow = slow->next;
		fast = (fast->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: list
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node, idx;

	idx = 0;
	if (head == NULL)
	exit (98);

	node = node_count(head);
	if (node == 0)
	{
		for(; head != NULL; node++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for(idx = 0; idx < node; idx++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (node);
}
