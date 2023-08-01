#include "lists.h"

/**
 * _loc - count
 * @lis: pointer
 * @size: size of array
 * @ne: list
 * Return: list
 */
const listint_t **_loc(const listint_t **lis, size_t size, const listint_t *ne)
{
	const listint_t **n;
	size_t a = 0;

	n = malloc(sizeof(listint_t *) * size);
	if (n == NULL)
	{
		free(lis);
		exit(98);
	}
	for (; a < size - 1; a++)
	{
		n[a] = lis[a];
	}
	n[a] = ne;
	free(lis);
	return (n);
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

	counter = 0;
	while (head != NULL)
	{
		for (b = 0; b < counter; b++)
		{
			if (head == loop[b])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(loop);
				return (counter);
			}
		}
		counter++;
		loop = _loc(loop, counter, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(loop);
	return (counter);
}
