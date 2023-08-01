#include "lists.h"
/**
 * loop_count - counts number of nodes
 * @head: list
 * Return: 0 if not loop
 */
size_t loop_count(listint_t *head)
{
	listint_t *slow, *fast;
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
			slow = head;
			while (slow != fast)
			{
				n++;
				slow = slow->next;
				fast = fast->next;
			}
			slow = slow ->next;
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
	return(0);
}
/**
 * free_listint_safe - frees a listint_t list.
 * @h: list
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t n, i;
	listint_t *temp;

	n = loop_count(*h);
	if (n == 0)
	{
		for (; h != NULL && *h != NULL; n++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
		*h = NULL;
	}
	h = NULL;
	return (n);
}
