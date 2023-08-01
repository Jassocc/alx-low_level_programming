#include "lists.h"

/**
 * node_count - counts nodes
 * @head: pointer
 * Return: count
 */
/*
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
}*/
/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: list
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head;
	const listint_t *fast = head;
	size_t node = 0;
	int f = 0;

	while (slow && fast && fast->next)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		node++;
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			f = 1;
			break;
		}
	}
	if (f)
	{
		slow = head;
		while (slow != fast)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			node++;
			slow = slow->next;
			fast = fast->next;
		}
		printf("[%p] %d\n", (void *)slow, slow->n);
		printf("-> [%p] %d\n", (void *)fast, fast->n);
	}
	else
	{
		slow = head;
		while (slow)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			node++;
			slow = slow->next;
		}
	}
	return (node);
}
