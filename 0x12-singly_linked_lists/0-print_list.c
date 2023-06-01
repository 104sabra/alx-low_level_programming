#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to the first element (head)
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("[%u] %s\n",
			(h->str == NULL) ? 0 : h->len,
			(h->str == NULL) ? "(nil)" : h->str);
		h = h->next;
		count++;
	}

	return (count);
}
