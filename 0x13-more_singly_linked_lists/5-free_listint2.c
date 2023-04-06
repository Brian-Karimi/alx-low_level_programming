#include "lists.h"

/**
 * free_listint2-frees a listint_t list
 * @head: pointer to the first node
 * Return: nothing
 **/
void free_listint2(listint_t **head)
{
	listint_t *temp_node, *current_node;

	if (head == NULL)
	{
		return;
	}

	current_node = *head;

	while ((temp_node = current_node) != NULL)
	{
		current_node = current_node->next;
		free(temp_node);
	}

	*head = NULL;
}
