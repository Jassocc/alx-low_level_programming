#include "lists.h"

/**
 * _location - count
 * @listing: pointer
 * @size: size of array
 * @newer: list
 * Return: list
 */
const listint_t **_location(const listint_t **listing, size_t size, const listint_t *newer)
{
	const listint_t **n;
	size_t a = 0;

	n = malloc(sizeof(listint_t *) * size);
	if (n == NULL)
	{
		free(listing);
		exit(98);
	}
	for (; a < size - 1; a++)
	{
		n[a] = listing[a];
		n[a] = newer;
		free(listing);
		return (n);
	}
}
/**
 * print_listint_safe - prints a list
 * @head: linked list
 * Return: list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t b, counter;
	const listint_t **loop = NULL;

	b = 0;
	counter = 0;
	while (head != NULL)
	{
		for (; b < counter; b++)
		{
			if (head == loop[b])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(loop);
				return (counter);
			}
		}
		counter++;
		loop = _location(loop, counter, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(loop);
	return (counter);
}
