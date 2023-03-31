#include "lists.h"

/**
 * print_list- print linked lis elements
 * @h: pointer to the first node at the head
 * Return: Number of nodes in the list
 **/
size_t print_list(const list_t *h)
{
	size_t count;

	while (h)
	{
		(h->str == NULL) ? printf("[%d] %s\n", h->len, h->str) :
			printf("[0] (nil)\n");

		count++;
		h = h->next;
	}

	return (count);
}
