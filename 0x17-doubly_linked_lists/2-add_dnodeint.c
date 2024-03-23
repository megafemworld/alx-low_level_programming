#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning
 * @head: head of the pointer
 * @n: data to input to the node
 * Return: Adress of new node or NULL if falied
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t* newnode = (dlistint_t *)malloc(sizeof(dlistint_t));

	if(!newnode)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next =  (*head);

	if ((*head) != NULL)
	{
		(*head)->prev = newnode;
	}
	(*head) = newnode;
	return (newnode);
}
