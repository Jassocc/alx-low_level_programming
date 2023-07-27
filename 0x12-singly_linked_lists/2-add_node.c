#include "lists.h"

/**
 * _len - len of string
 * @str: string
 * Return: len
 */
int _len(const char *str)
{
	int length;

	for (length = 0; str[length] != '\0'; length++)
		;
	return (length);
}
/**
 * add_node - adds a new node at the beginning
 * @head: list
 * @str: data
 * Return: new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node;

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
	if (head == NULL)
	{
		n_node->next = NULL;
	}
	else
	{
		n_node->next = *head;
	}
	*head = n_node;
	return (n_node);
}
