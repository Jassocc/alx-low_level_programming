#include "lists.h"

/**
 * _len - length of string
 * @str: string
 * Return: length
 */
int _len(const char *str)
{
	int length;

	for (length = 0; str[length] != '\0'; length++)
		;
	return (length);
}
/**
 * add_node_end - adds a new node at the end
 * @head: list
 * @str: data
 * Return: element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node, *temp;

	if (str == NULL)
	{
		return (NULL);
	}
	if (strdup(str) == NULL)
	{
		return (NULL);
	}
	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
	{
		return (NULL);
	}
	n_node->str = strdup(str);
	n_node->len = _len(str);
	n_node->next = NULL;
	if (*head == NULL)
	{
		*head = n_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = n_node;
	}
	return (n_node);
}
