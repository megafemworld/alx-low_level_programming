#include "lists.h"

/**
 * get_dnodeint_at_index -  returns the nth node of a dlistint_t linked list.
 * @head: head of the list.
 * @index: the index of the node, starting from 0
 * Return: node otherwise NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int tracker = 0;

	if (head == NULL)
		return (NULL);
	temp = head;
	while (temp != NULL)
	{
		if (index == tracker)
			return (temp);
		temp = temp->next;
		tracker++;
	}
}
