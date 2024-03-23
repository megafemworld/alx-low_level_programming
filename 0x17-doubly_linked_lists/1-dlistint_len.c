#include "lists.h"

/**
 * dlistint_len - count the number of element of the linked list
 *
 * @h: head of the linked list
 * Return: Always number of element
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	while (h != NULL)
	{
		count++;
		h = h->next
	}
	return (count);
}
