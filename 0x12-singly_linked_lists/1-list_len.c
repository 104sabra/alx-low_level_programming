#include "lists.h"

/**
 * list_len - counts elements in a linked list_t list_len
 * @h: pointer to head of the linked list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
