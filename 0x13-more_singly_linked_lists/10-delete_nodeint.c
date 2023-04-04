#include "lists.h"

/**
 * delete_nodeint_at_index-deletes the node at index given
 * @head: pointer to the first not=de
 * @index: index where to delete node
 * Return: *head
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int iter;
	listint_t *current_node, *next_node;

	if (!head || !*head)
	{
		return (-1);
	}

	current_node = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(current_node);
		return (1);
	}
	for (iter = 0; iter < (index - 1); iter++)
	{
		current_node = current_node->next;
		if (current_node == NULL)
		{
			return (-1);
		}
	}
	next_node = current_node->next;
	current_node->next = next_node->next;
	free(next_node);
	return (1);
}
