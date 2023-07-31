#include "lists.h"

/**
 * node_count - counts nodes
 * @head: pointer
 * Return: count
 */
int node_count(const listint_t *head)
{
	int c;
	const listint_t *fast, *slow;

	slow = fast = head;
	c = 0;
	while (slow != NULL && fast != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		c++;
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
				c++;
			}
			return (c);
		}
	}
	return (0);
}
/**
 * list_loop - find loop in linked list
 * @head: list
 * Return: 0 if no loop
 */
int list_loop(const listint_t *head)
{
	const listint_t *slow, *fast;

	slow = fast = head;
	while (slow != NULL && fast != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			return (1);
		}
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
	int c, f;
	size_t node;
	const listint_t *temp;

	node = 0;
	c = 0;
	if (head == NULL)
	{
		exit(98);
	}
	f = list_loop(head);
	if (f == 1)
	{
		c = node_count(head);
		temp = head;
		for (f = 0; f < c; f++)
		{
			printf("[%p] %d\n", (void *)temp, temp->n);
			node = node + 1;
			temp = temp->next;
		}
	}
	else if (f == 0)
	{
		temp = head;
		while (temp != NULL)
		{
			printf("[%p] %d\n", (void *)temp, temp->n);
			node = node + 1;
			temp = temp->next;
		}
	}
	return (node);
}
