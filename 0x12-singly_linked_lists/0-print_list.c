#include "lists.h"

/**
 * print_list- print linked lis elements
 * @h: pointer to the first node at the head
 * Return: Number of nodes in the list
 **/
size_t print_list(const list_t *h)
{
	size_t count;

	for (count = 0; h; count++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (count);
}
