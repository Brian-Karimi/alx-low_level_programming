#include "lists.h"

/**
 * list_len - finds the number of nodes in a list
 * @h: singly linked list
 * Return: number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	int count_node;

	for (count_node = 0; h; count_node++)
		h = h->next;
	return (count_node);
}
