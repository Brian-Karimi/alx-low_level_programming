#include "lists.h"

/**
 * add_nodeint-adds a new node at the beginniing of the list
 * @head: double pointer to the first node
 * @n: temp var to add a new node to the list
 * Return: pointer to the new head afte new node
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = *head;
	new_node  = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
