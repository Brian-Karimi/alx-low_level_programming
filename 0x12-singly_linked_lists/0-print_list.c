#include "lists.h"

/**
 * print_list- print linked lis elements
 * @h: pointer to the first node at the head
 * Return: Number of nodes in the list
 **/
size_t print_list(const list_t *h)
{
	size_t count_el = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count_el++;
	}
	return (count_el;
}
