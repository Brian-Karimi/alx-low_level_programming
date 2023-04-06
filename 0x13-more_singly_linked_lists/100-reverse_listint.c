#include "lists.h"

/**
 * reverse_listint-reverses a listint_t linked list
 * @head: Pointer to the head
 * Return: reversed linked list
 **/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr, *temp_node;

	if (head == NULL)
	{
		return (NULL);
	}

	if (*head != NULL)
	{
		ptr = *head;
		temp_node = (*head)->next;
		*head = (*head)->next;

		ptr->next = NULL;

		while (*head)
		{
			*head = (*head)->next;
			temp_node->next = ptr;

			ptr = temp_node;
			temp_node = *head;
		}
		*head = ptr;
	}
	return (*head);
}
