#include "lists.h"

/**
 * get_nodeint_at_index-returns nth node in the list
 * @head: pointer to the first node
 * @index: index of the node
 * Return: node at index
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int iter;

	iter = 0;
	while (iter < index)
	{
		if (head->next == NULL)
		{
			return (NULL);
		}
		head = head->next;
		iter++;
	}
	return (head);
}
