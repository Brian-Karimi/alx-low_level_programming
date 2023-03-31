#include "lists.h"

/**
 * print_list- print linked lis elements
 * @h: pointer to the first node at the head
 * Return: Number of nodes in the list
 **/
size_t print_list(const list_t *h)
{
	size_t count_el;

	for (count_el = 0; h; count_el++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (count_el);
}
}
