#include "lists.h"

/**
 * free__listint-frees mem allocated  for listin_t
 * @head: pointer to the first node
 * Return: nothing
 **/
void free_listint(listint_t *head)
{
	if (head == NULL)
	{
		return;
	}
	free_listint(head->next);
	free(head);
}
