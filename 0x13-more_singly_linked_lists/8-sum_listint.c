#include "lists.h"

/**
 * sum_listint-returns the summ of all data n in the list
 * @head:pointer to the first node in the list
 * Return:sum of all data (n elements)
 **/
int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head; sum += head->n, head = head->next)
		;
	return (sum);
}
