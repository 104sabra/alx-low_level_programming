#include "lists.h"
/**
 * add_node - prepends
 * @head: pointer to a pointer to the head of SLL
 * @str: string to be duplicated and added as the new node
 * Return: address of the new node or NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int len = 0;
	const char *str_ptr = str;

	while (*str_ptr)
	{
		len++;
		str_ptr++;
	}

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
