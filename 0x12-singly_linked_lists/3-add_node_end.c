#include "lists.h"
/**
 * add_node_end - appends
 * @head: pointer to a pointer to the head of the SLL
 * @str: string to be duplicated and added as the new node
 *
 * Return: address of the new node or NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last = *head;
	int len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
	}
	else
	{
		last = *head;
		while (last->next)
			last = last->next;

		last->next = new_node;
	}
	return (new_node);
}
