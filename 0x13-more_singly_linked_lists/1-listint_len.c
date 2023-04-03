#include "lists.h"

/**
 * listint_len- returns  the number of elements in  alinked list
 * @h: pointer to the singly linked list 
 * Return: len of the link
 **/
size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h != 0; i++)
	{
		h = h->next;
	}
	return (i);
}
