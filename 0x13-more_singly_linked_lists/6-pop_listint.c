#include "lists.h"

/**
 * pop_listint-deletes the head node on the list
 * @head: first node pointer
 * Return: Head node's data (n)
 **/
int pop_listint(listint_t **head)
{
	int init_node;
	listint_t *temp_node, *next;

	if (*head == NULL)
	{
		return (0);
	}

	temp_node = *head;
	next = temp_node->next;
	init_node = temp_node->n;
	free(temp_node);
	{
		*head = next;
	}
	return (init_node);
}
