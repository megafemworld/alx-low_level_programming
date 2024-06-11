#include "lists.h"

/**
 * delete_dnodeint_at_index -  deletes the node at index on the list.
 * @head: head of ther list.
 * @index: index of the node that should be deleted.
 * Return: 1 on success otherwise -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp;

	if (head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
		return (-1);
	if (temp->prev != NULL)
		temp-prev->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = temp->prev;

	free(temp);
	return (1);
}
