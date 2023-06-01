#include "lists.h"

/**
 * free_list - frees the SLL
 * @head: pointer to the head of the list
 */

void free_list(list_t *head)
{
	list_t *current, *tmp;

	current = head;
	while (current)
	{
		tmp = current->next;
		free(current->str);
		free(current);
		current = tmp;
	}
}
