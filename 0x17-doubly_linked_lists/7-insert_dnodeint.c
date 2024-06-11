#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: head of the list.
 * @idx:  index of the list where the new node should be added.
 * @n: data to insert in the new node.
 * Return: newnode otherwise NULL.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int tracker = 0;
	dlistint_t *temp, *insertnode;

	if (h == NULL)
		return (NULL);
	insertnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (insertnode == NULL)
		return (NULL);
	insertnode->n = n;
	insertnode->next = NULL;
	insertnode->prev = NULL;
	if (idx == 0)
	{
		insertnode->next = *h;
		if (*h != NULL)
			(*h)->prev = insertnode;
		*h = insertnode;
		return (insertnode);
	}
	temp = *h;
	while (temp != NULL && tracker < idx)
	{
		if (tracker == idx - 1)
		{
			insertnode->next = temp->next;
			insertnode->prev = temp;
			if (temp->next != NULL)
				temp->next->prev = insertnode;
			temp->next = insertnode;
			return (insertnode);
		}
		temp = temp->next;
		tracker++;
	}
	free(insertnode);
	return (NULL);
}
