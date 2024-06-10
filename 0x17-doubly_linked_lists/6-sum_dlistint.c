#include "lists.h"

/**
 * sum_dlistint -  sum of all the data (n) of a dlistint_t linked list.
 * @head: head of the list.
 *
 * Return: sum of the data otherwise 0.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (sum);
	temp = head;
	while (temp != NULL)
	{
		sum = sum + temp->data;
		temp = temp->next;
	}
	return (sum);
}
