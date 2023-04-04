#include "lists.h"

/**
 * insert_nodeint_at_index-inserts a new node ata a given index
 * @head: pointer to the first node
 * @idx: indext where to insert new node
 * @n: inserted node value
 * Return: pointer to head
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current_node, *new_node;

	current_node = *head;
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = current_node;
		*head = new_node;
		return (*head);
	}
	while (idx > 1)
	{
		current_node = current_node->next;
		idx--;
		if (!current_node)
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->next = current_node->next;
	current_node->next = new_node;
	return (new_node);
}
